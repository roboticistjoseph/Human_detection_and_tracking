/**
 * @file preprocess.cpp
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

// header file for the 'Preprocessor' class
#include "./include/preprocess.hpp"

Preprocessor::Preprocessor() {
    input_width = 640.0;
    input_height = 640.0;
}

Preprocessor::Preprocessor(float custom_value_of_resize) {
    input_width = custom_value_of_resize;
    input_height = custom_value_of_resize;
}

void Preprocessor::LoadData(cv::Mat image_frame) {
    resized_frame = image_frame;
}

void Preprocessor::Preprocess() {
    int col = resized_frame.cols;
    int row = resized_frame.rows;
    int _max = MAX(col, row);

    // formatting to uint8
    cv::Mat resized = cv::Mat::zeros(_max, _max, CV_8UC3);
    resized_frame.copyTo(resized(cv::Rect(0, 0, col, row)));

    // resize to 640x640, normalize to [0,1[ and swap Red and Blue channels
    cv::Mat blob;
    cv::dnn::blobFromImage(resized_frame, blob, 1./255.,
                            cv::Size(INPUT_WIDTH, INPUT_HEIGHT), cv::Scalar(), true, false);

    resized_frame = result;
}

cv::Mat Preprocessor::GetResizedImage() {
    return resized_frame;
}

~Preprocessor::Preprocessor() {
}
