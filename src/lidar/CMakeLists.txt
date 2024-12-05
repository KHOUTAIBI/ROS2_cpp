cmake_minimum_required(VERSION 3.5)
project(lidar)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
include_directories(${CMAKE_SOURCE_DIR})
find_package(ament_cmake REQUIRED)
find_package(ydlidar_sdk REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(lidar_interfaces REQUIRED)


set (packages 
rclcpp std_msgs lidar_interfaces)


#Include directories
include_directories(
  ${YDLIDAR_SDK_INCLUDE_DIRS}
  include
)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


link_directories(${YDLIDAR_SDK_LIBRARY_DIRS})

#Link your project to ydlidar_sdk library.
add_executable(lidar src/lidar_node.cpp)
add_executable(arduino src/arduino_subscriber.cpp src/serial.cpp)
ament_target_dependencies(lidar ${packages})
ament_target_dependencies(arduino ${packages})
target_link_libraries(${PROJECT_NAME} ${YDLIDAR_SDK_LIBRARIES})

install(TARGETS
  lidar
  arduino
  DESTINATION lib/${PROJECT_NAME})

install(PROGRAMS
  scripts/lidar_subscription_node.py
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line whben this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
