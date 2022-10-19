/**
 * @file camera.cpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief Header file for Camera class
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INCLUDE_CAMERA_HPP_
#define INCLUDE_CAMERA_HPP_

// standard libraries
#include <iostream>
#include <string>

// image processing libraries
#include <opencv2/opencv.hpp>

/**
 * @brief Class for Camera sensor
 * 
 */
class CameraClass {
 private:
 /**
  * @brief Variable to hold the frame
  * 
  */
  const cv::Mat frame;

  /**
   * @brief Image data path
   * 
   */
  const std::string image_data_path;

 public:
  /**
   * @brief Setting the path for the Image data
   * 
   * @param path 
   */
  void ReadData(std::string path);

  /**
   * @brief Get the Image frame
   * 
   * @return cv::Mat 
   */
  cv::Mat GetImage();

  /**
   * @brief Destroy the Camera Class object
   * 
   */
  ~CameraClass();
}

#endif // INCLUDE_CAMERA_HPP_ 
