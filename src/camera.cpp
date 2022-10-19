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

// header file for the 'Camera' class
#include "./include/camera.hpp"

bool CameraClass::ReadData(std::string path) {
    image_data_path = cv::samples::findFile(path);
    frame = cv::imread(image_data_path, cv::IMREAD_COLOR);
    if (frame.empty()) {
        std::cout << "Could not read the image: " << image_data_path << std::endl;
        return false;
    }
    return true;
}

cv::Mat CameraClass::GetImage() {
    return frame;
}

CameraClass::~CameraClass() {
}
