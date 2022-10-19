/**
 * @file transform.cpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief C++ file for Transform class
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// header file for the 'TransformClass' class
#include "./include/transform.hpp"

TransformClass::TransformClass() {
    // the robot's pose is assumed to be at (2, 2, 2)
    robot_pose[0] = 2.00;
    robot_pose[1] = 2.00;
    robot_pose[2] = 2.00;

    // the camera's pose is obtained from detection
    camera_pose[0] = detected_image_height;
    camera_pose[1] = detected_image_weight;
}

TransformClass::Calibrate() {
    // formula to get the distance of detection from camera
    double depth_of_detection = (focal_length * avg_human_height) / detected_image_height;

    camera_pose[2] = depth_of_detection;
}

TransformClass::CalculateWorldCoordinates() {
    // Transformation matrix
    transformation_matrix << 1, 0, 0, robot_pose[0] - camera_pose[0],
                             0, 1, 0, robot_pose[1] - camera_pose[1],
                             0, 0, 1, robot_pose[2] - camera_pose[2],
                             0, 0, 0, 1;
}
