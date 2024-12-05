#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "cpp_interfaces/msg/stm_control.hpp"
#include "cpp_interfaces/msg/stm_state.hpp"

using std::placeholders::_1;


class SubPubNode : public rclcpp::Node{

    rclcpp::Subscription<cpp_interfaces::msg::STMControl>::SharedPtr master_subscription_;
    rclcpp::Subscription<cpp_interfaces::msg::STMState>::SharedPtr slave_subscription_;
    rclcpp::Publisher<cpp_interfaces::msg::STMControl>::SharedPtr master_publisher_;
    size_t count_;

    public : 
        SubPubNode() : Node("stm_subpub_node"), count_(0){

            master_subscription_ = this->create_subscription<cpp_interfaces::msg::STMControl>(
                "/group_1/stm_state",
                10,
                std::bind(&SubPubNode::master_topic_callback, this, _1)
            );

            // slave_subscription_ = this->create_subscription<cpp_interfaces::msg::STMState>(
                // "/group_2/stm_state",
                // 10,
                // std::bind(&SubPubNode::slave_topic_callback,this,_1)
            // );

            master_publisher_ = this->create_publisher<cpp_interfaces::msg::STMControl>(
                "/group_2/stm_control",
                10
            );
    }

    private :
        void master_topic_callback(cpp_interfaces::msg::STMControl::SharedPtr msg){
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->setpoint);
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->pwm);
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->kp);
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->control_type);
            master_publisher_->publish(
                *msg
        );
    }
    private :
        void slave_topic_callback(const cpp_interfaces::msg::STMState::SharedPtr msg) const{
        RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->motor_encoder);
        RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->motor_velocity);
    }
};


int main(int argc , char* argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubPubNode>());
    rclcpp::shutdown();
    return 0;
}