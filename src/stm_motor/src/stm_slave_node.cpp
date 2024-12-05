#include <memory>
#include <stdio.h>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_interfaces/msg/stm_state.hpp"
#include "cpp_interfaces/msg/stm_control.hpp"

using std::placeholders::_1;

class slave_node : public rclcpp::Node{

    rclcpp::Subscription<cpp_interfaces::msg::STMControl>::SharedPtr subscriber_;
    size_t count_;
  
    public :
        slave_node() : Node("slave_node"), count_(0){
            
            subscriber_ = this->create_subscription<cpp_interfaces::msg::STMControl>(
                "/group_2/stm_control",
                 10,
                std::bind(&slave_node::topic_callaback,this,_1)
            );
        }

    public :
        void topic_callaback(const cpp_interfaces::msg::STMControl::SharedPtr msg) const{
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->control_type);
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->kp);
            RCLCPP_INFO(this->get_logger(), "Received  %f : " , msg->pwm);

        }
};

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<slave_node>());
    rclcpp::shutdown();
    return 0;
}

