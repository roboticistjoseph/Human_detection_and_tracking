# Human Dectection and Tracking Module for Acme Robotics

A C++ Module for new robotics-based product of ACME Robotics using high-quality engineering practices to detect and track Humans and return their position in the robot's reference frame.

[![Build Status](https://github.com/z-Ash-z/Human_detection_and_tracking/actions/workflows/build_and_coveralls.yml/badge.svg)](https://github.com/z-Ash-z/Human_detection_and_tracking/actions/workflows/build_and_coveralls.yml)
[![Coverage Status](https://coveralls.io/repos/github/z-Ash-z/Human_detection_and_tracking/badge.svg?branch=main)](https://coveralls.io/github/z-Ash-z/Human_detection_and_tracking?branch=main)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
---

## Authors
 - [Aneesh Chodisetty](https://github.com/z-Ash-z) - 117359893
 - [Bhargav Kumar Soothram](https://github.com/Bhargav-Soothram) - 117041088
 - [Joseph Pranadeer Reddy Katakam](https://github.com/roboticistjoseph) - 117517958

## Table of Contents
1. [Introduction](#introduction)
2. [Deliverables](#deliverables)
3. [Proposal Documentation](#project-proposal)
4. [Development Process](#system-design)
5. [UML Diagrams](#system-architecture)
6. [Dependencies](#dependencies)
7. [Tools](#tools-used)

## Introduction

  Object detection and tracking is a computer vision task that has become essential for many robot applications. The object detection and tracking is the base for autonomous robots in specific. Suppose there is a autonomous delivery robot that is on a mission, it has to identify objects, track them, convert their coordinates to the robot's frame of reference and then try to avoid it. This project is foucussed on solving this problem using existing state-of-art object detection algorithms.  

  As per Acme Robotic's requirement, we will use the input from a monocular camera to detect and track an object. This object is then converted to the robot's frame of reference. This package is then used by Acme in their robotics-based product that will be lauched next year.  

  Our system uses YOLOv5 model that is trained using [COCO dataset](https://cocodataset.org/#home) and is built using C++. COCO dataset is a large-scale object detection, segmentation, and captioning dataset. Our system takes an image from a monocular camera, pre-processes the image, passes this image to the trained model, filters out the human object with the highest confidence and then outputs the location of the object in the robot's frame of reference.
  
## Deliverables

  1. Proposal Documentation
  2. UML Diagrams
  3. Project Package with demonstrated OOPs concepts
  4. CI using Travis
  5. Code Coverage using Coveralls
  6. Unit Tests using Google Test Framework
  7. Developer Level Documentation
  8. Static code analysis with cppcheck
  9. Google C++ Style guide with cpplint validation

### Project proposal

  - The project proposal document can be found [here](/docs/proposal/Human_Detection_and_Tracker_Proposal.pdf).  
  - The proposal video can be found [here](https://youtu.be/7sqIBtfbFjk).  
  - The quadchart can be found [here](/docs/proposal/Quadchart.pdf).

### Project Backlog

  - Using the Software Engineering Practices, all design and development work was followed Agile Iterative Process (AIP) where product backlog, iteration backlog, and work log were maintained usign appropriate measure.
  - The Sheet can be accessed [here](https://docs.google.com/spreadsheets/d/1Nfs6v8OHeC70GFt3viYTwkHFGsq4SffKc7hRbwgNCj4/edit#gid=0)

## System Design

### Development methodology

  Agile software development model will be used for the development process where tasks will be tracked using a backlog table. The software is designed in a Test-Driven Development fashion and implemented using Pair programming technique. The tasks will be outlined for every sprint and after each sprint, the roles of the pair-programming group will be interchanged.

### System architecture
- The class diagram can be found [here](/UML/proposal/HumanDetectionTracking_ClassDiagram.pdf).

- The flow of our system is as follows:  

![Activity Diagram](/UML/proposal/HumanDetectionTracking_ActivityDiagram.png)  

## Project Hierarchy

<pre><font color="#3465A4"><b>.</b></font>
├── <font color="#3465A4"><b>app</b></font>
│   ├── CMakeLists.txt
│   └── main.cpp
├── <font color="#3465A4"><b>cmake</b></font>
│   └── CodeCoverage.cmake
├── CMakeLists.txt
├── <font color="#3465A4"><b>data</b></font>
│   └── <font color="#75507B"><b>human.jpg</b></font>
├── <font color="#3465A4"><b>docs</b></font>
│   └── <font color="#3465A4"><b>proposal</b></font>
├── <font color="#3465A4"><b>include</b></font>
│   ├── camera.hpp
│   ├── model.hpp
│   ├── preprocess.hpp
│   ├── track.hpp
│   └── transform.hpp
├── LICENSE
├── README.md
├── <font color="#3465A4"><b>results</b></font>
│   ├── cppcheck.txt
│   └── cpplint.txt
├── <font color="#3465A4"><b>src</b></font>
│   ├── camera.cpp
│   ├── CMakeLists.txt
│   ├── model.cpp
│   ├── preprocess.cpp
│   ├── track.cpp
│   └── transform.cpp
├── <font color="#3465A4"><b>test</b></font>
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── test.cpp
├── <font color="#3465A4"><b>UML</b></font>
│   └── <font color="#3465A4"><b>proposal</b></font>
└── <font color="#3465A4"><b>vendor</b></font>
    └── <font color="#3465A4"><b>googletest</b></font>
</pre>

### Dependencies  

| Name | Version | License |
| :--- | :--- | :--- |
| Ubuntu | 20.04(LTS) | FSF Licenses |
| C++ | 14 | Creative Commons Attribution-ShareAlike 3.0 Unported License |
| OpenCV | 4.6.0 | Apache License 2.0 |
| Cmake | 3.16.3 | BSD 3-clause License |

### Tools used  

| Usage/Type | Tool name | License |
| :--- | :--- | :--- |
| IDE | Visual Studio Code | MIT License |
| CI pipeline | Travis CI | enterprise.travis- ci.com |
| Code coverage | Coveralls | Coveralls, LLC |
| Running tests | Gtests | BSD 3-Clause "New" or "Revised" License |
