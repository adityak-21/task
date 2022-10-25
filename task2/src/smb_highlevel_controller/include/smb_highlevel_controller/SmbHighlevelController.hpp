#pragma once

#include <ros/ros.h>
// #include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <string.h>

using namespace std;

namespace smb_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class SmbHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	SmbHighlevelController(ros::NodeHandle& nodeHandle);

	/*!
	 * Destructor.
	 */
	virtual ~SmbHighlevelController();

private:
	bool readParameters();
	void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg);

	ros::NodeHandle nodeHandle_;
	ros::Subscriber scanSubscriber_;
	// ros::Publisher twistPublisher_;
	string scantopic_;
	int subscriberQueueSize_;
	// string twistTopic_;
	// int publisherQueueSize_;
};

} /* namespace */
