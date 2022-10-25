#include "smb_highlevel_controller/SmbHighlevelController.hpp"

namespace smb_highlevel_controller {

SmbHighlevelController::SmbHighlevelController(ros::NodeHandle& nodeHandle) :
  nodeHandle_(nodeHandle),
  scantopic_("/scan"),
  subscriberQueueSize_(10)
  // twistTopic_("/twist"),
  // publisherQueueSize_(10)
{
  if(!readParameters()){
    ROS_ERROR("Could not read params. CUK");
    ros::requestShutdown();
  }
  scanSubscriber_ = nodeHandle_.subscribe(scantopic_, subscriberQueueSize_, &SmbHighlevelController::scanCallback, this);
  // twistPublisher_ = nodeHandle_.advertise<geometry_msgs::Twist>(twistTopic_, publisherQueueSize_);
}
SmbHighlevelController::~SmbHighlevelController()
{
}

bool SmbHighlevelController::readParameters(){
  if(!nodeHandle_.getParam("/smb_highlevel_controller/scan_subscriber_queue_size", subscriberQueueSize_)){
    return false;
  }
  if(!nodeHandle_.getParam("/smb_highlevel_controller/scan_subscriber_topic_name", scantopic_)){
    return false;
  }
  // if(!nodeHandle_.getParam("/smb_highlevel_controller/twist_publisher_queue_size", publisherQueueSize_)){
  //   return false;
  // }
  // if(!nodeHandle_.getParam("/smb_highlevel_controller/twist_publisher_topic_name", twistTopic_)){
  //   return false;
  // }
  return true;
}

void SmbHighlevelController::scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg){
  float minDistance = 100.0;
  int minDistanceIndex = 0;

  int i=0;
  float angle = msg->angle_min;

  while(angle <= msg->angle_max){
    if(msg->ranges[i]<minDistance){
      minDistance= msg->ranges[i];
      minDistanceIndex= i;
    }
    i++;
    angle += msg->angle_increment;
  }

  ROS_INFO("Min Distance: %f, angle: %f", minDistance, msg->angle_min+minDistanceIndex*msg->angle_increment);
}

} /* namespace */
