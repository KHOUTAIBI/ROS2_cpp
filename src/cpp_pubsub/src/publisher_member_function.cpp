// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_interfaces/msg/custom.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"


using namespace std::chrono_literals;
using namespace std;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr publisher_;
  size_t count_;

public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("topic", 10);
    timer_ = this->create_wall_timer(
      500ms,std::bind(&MinimalPublisher::timer_callback, this));
  }

private: 
  void timer_callback()
  {
    auto message = std_msgs::msg::Float32MultiArray();
    message.data = {1.2,5.1,20.30,100.20};
    RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.data[2]);
    this->publisher_->publish(message);
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
