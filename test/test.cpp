/**
 * @file preprocess.hpp
 * @author Aneesh Chodisetty (aneeshc@umd.edu)
 * @author Bhargav Kumar Soothram (bsoothra@umd.edu)
 * @author Joseph Pranadheer Reddy Katakam (jkatak@umd.edu)
 * @brief Header file for model.cpp
 * @version 0.1
 * @date 2022-10-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <gtest/gtest.h>
#include "../include/camera.hpp"
#include "./include/preprocess.hpp"

/**
 * @brief Test to see if the data (image) is properly being read
 * 
 */
TEST(ReadData, read_data_true) {
    // Creating instance of class
    CameraClass camera_object;
    // Testing the ReadData function
    EXPECT_EQ(camera_object.ReadData("../data/human.jpg"), true);
}

/**
 * @brief Test case 1 to check if the preprocessing of image works as expected
 * 
 */
TEST(Preprocess, dimg_ata_type) {
    // Read Image
    auto loading_frame = cv::imread("../data/human.jpg", cv::IMREAD_COLOR);

    // Creating instance of class and preprocess data
    Preprocessor preprocessing_object;
    preprocessing_object.LoadData(loading_frame);
    preprocessing_object.Preprocess();
    auto test_image = preprocessing_object.GetResizedImage();

    // the datatype of preprocessed image changes from uint8 (8 bytes) to float32 (16 bytes)
    EXPECT_EQ(static_cast<int>(test_image.type()), static_cast<int>(16));
}

/**
 * @brief Test case 2 to check if the preprocessing of image works as expected
 * 
 */
TEST(Preprocess, img_dimension) {
    // Read Image
    auto loading_frame = cv::imread("../data/human.jpg", cv::IMREAD_COLOR);

    // Creating instance of class and preprocess data
    Preprocessor(640) preprocessing_object;
    preprocessing_object.LoadData();
    preprocessing_object.Preprocess();
    auto test_image = preprocessing_object.GetResizedImage();

    // the dimension of preprocessed image is set to 640 x 640
    EXPECT_EQ(static_cast<int>(test_image.size[0]), static_cast<int>(640));
    EXPECT_EQ(static_cast<int>(test_image.size[1]), static_cast<int>(640));
}
