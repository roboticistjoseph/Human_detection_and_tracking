/**
 * @file preprocess.hpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief Header file for Preprocessor class
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INCLUDE_PREPROCESS_HPP_
#define INCLUDE_PREPROCESS_HPP_

// standard libraries
#include <iostream>
#include <string>

// image processing libraries
#include <opencv2/opencv.hpp>
#include <opencv2/core/mat.hpp>

/**
 * @brief Class for Preprocessing input image data
 * 
 */
class PreprocessorClass {
 private:
 /**
  * @brief Variable to hold the resized frame
  * 
  */
  cv::Mat resized_frame;

  /**
   * @brief Value for resizing the image width
   * 
   */
  float input_width;

  /**
   * @brief Value for resizing the image height
   * 
   */
  float input_height;

 public:
  /**
   * @brief Default Construct a new Preprocessor Class object
   * 
   */
  PreprocessorClass();

  /**
   * @brief Custom Construct a new Preprocessor Class object
   * 
   * @param value_of_resize 
   */
  explicit PreprocessorClass(int custom_value_of_resize);

  /**
   * @brief Load the input frame
   * 
   * @param image_frame
   */
  void LoadData(cv::Mat image_frame);

  /**
   * @brief Function to resize/rescale the inputs as desired
   * 
   */
  void Preprocess();

  /**
   * @brief Get the Resized Image object
   * 
   * @return cv::Mat 
   */
  cv::Mat GetResizedImage();

  /**
   * @brief Destroy the Preprocessor Class object
   * 
   */
  ~PreprocessorClass();
}

#endif // INCLUDE_PREPROCESS_HPP_ 
