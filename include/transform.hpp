/**
 * @file transform.hpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief Header file for Transform class
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INCLUDE_TRANSFORM_HPP_
#define INCLUDE_TRANSFORM_HPP_

// standard libraries
#include <iostream>
#include <string>
#include <vector>

// image processing libraries
#include <opencv2/opencv.hpp>

using Eigen::Matrix4d;
using Eigen::Vector4d;

class TransformClass() {
  private:
    const double avg_human_height;
    double focal_length;
    double detected_image_height;
    double detected_image_weight;
    Eigen::Matrix4d transformation_matrix;

    std::vector<double> camera_pose;
    std::vector<double> robot_pose;

  public:
    void Calibrate();
    void CalculateWorldCoordinates();
    std::vector<List> GetOutput();
    ~TransformClass();
}


#endif // INCLUDE_TRANSFORM_HPP_
