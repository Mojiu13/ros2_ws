#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "custom_action_interfaces/action/fibonacci.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace custom_action_cpp
{
class FibonacciActionClient : public rclcpp::Node
{
public:
  using Fibonacci = custom_action_interfaces::action::Fibonacci;
  using GoalHandleFibonacci = rclcpp_action::ClientGoalHandle<Fibonacci>;

  explicit FibonacciActionClient(const rclcpp::NodeOptions & options)
  : Node("fibonacci_action_client", options)
  {
    // 初始化动作客户端
    this->client_ptr_ = rclcpp_action::create_client<Fibonacci>(
      this,
      "fibonacci");

    // 设置定时器以延迟发送目标
    auto timer_callback_lambda = [this](){ return this->send_goal(); };
    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      timer_callback_lambda);
  }

  void send_goal()
  {
    using namespace std::placeholders;

    // 停止定时器以避免重复调用
    this->timer_->cancel();

    // 等待动作服务端可用
    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    // 创建目标消息
    auto goal_msg = Fibonacci::Goal();
    goal_msg.order = 10;

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    // 配置目标选项，包括目标响应、反馈和结果回调
    auto send_goal_options = rclcpp_action::Client<Fibonacci>::SendGoalOptions();

    // 设置目标响应回调
    send_goal_options.goal_response_callback = [this](const GoalHandleFibonacci::SharedPtr & goal_handle)
    {
      if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      } else {
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
      }
    };

    // 设置反馈回调
    send_goal_options.feedback_callback = [this](
      GoalHandleFibonacci::SharedPtr,
      const std::shared_ptr<const Fibonacci::Feedback> feedback)
    {
      std::stringstream ss;
      ss << "Next number in sequence received: ";
      for (auto number : feedback->partial_sequence) {
        ss << number << " ";
      }
      RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    };

    // 设置结果回调
    send_goal_options.result_callback = [this](const GoalHandleFibonacci::WrappedResult & result)
    {
      switch (result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
          break;
        case rclcpp_action::ResultCode::ABORTED:
          RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
          return;
        case rclcpp_action::ResultCode::CANCELED:
          RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
          return;
        default:
          RCLCPP_ERROR(this->get_logger(), "Unknown result code");
          return;
      }
      std::stringstream ss;
      ss << "Result received: ";
      for (auto number : result.result->sequence) {
        ss << number << " ";
      }
      RCLCPP_INFO(this->get_logger(), ss.str().c_str());
      rclcpp::shutdown();
    };

    // 异步发送目标
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  // 动作客户端指针
  rclcpp_action::Client<Fibonacci>::SharedPtr client_ptr_;
  
  // 定时器指针
  rclcpp::TimerBase::SharedPtr timer_;
};  // class FibonacciActionClient

}  // namespace custom_action_cpp

// 注册节点为组件
RCLCPP_COMPONENTS_REGISTER_NODE(custom_action_cpp::FibonacciActionClient)
