/**
 * @file counter_node.cpp
 * @author Veiko Vunder
 * @brief
 * @version 0.1
 * @date 2022-11-03
 *
 * @copyright Copyright 2022 Veiko Vunder
 *
 */

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <test_demo_cpp/counter.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "counter_node");
  ros::NodeHandle nh;

  ros::Publisher pub = nh.advertise<std_msgs::Int32>("counter_value", 1);
  std_msgs::Int32 msg;

  Counter counter;

  while (ros::ok())
  {
    msg.data = counter.get_value();
    counter.increment(3);

    ROS_INFO_STREAM("Publishing: " << msg.data);
    pub.publish(msg);
    ros::Duration(1.0).sleep();
  }
  return 0;
}
