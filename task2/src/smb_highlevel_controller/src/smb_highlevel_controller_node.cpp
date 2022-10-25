#include <ros/ros.h>
#include "smb_highlevel_controller/SmbHighlevelController.hpp"

int main(int argc, char** argv) {
  ros::init(argc, argv, "smb_highlevel_controller");
  ros::NodeHandle nodeHandle("~");
    

  smb_highlevel_controller::SmbHighlevelController smbHighlevelController(nodeHandle);
  // smb_highlevel_controller::SmbHighlevelController smbHighlevelController(/scan);
  // smb_highlevel_controller::SmbHighlevelController smbHighlevelController(10);

  ros::spin();
  return 0;
}
