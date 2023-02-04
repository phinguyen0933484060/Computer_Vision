# CMake generated Testfile for 
# Source directory: /home/nguyen/opencv/modules/ml
# Build directory: /home/nguyen/build/modules/ml
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_ml "/home/nguyen/build/bin/opencv_test_ml" "--gtest_output=xml:opencv_test_ml.xml")
set_tests_properties(opencv_test_ml PROPERTIES  LABELS "Main;opencv_ml;Accuracy" WORKING_DIRECTORY "/home/nguyen/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/nguyen/opencv/cmake/OpenCVUtils.cmake;1752;add_test;/home/nguyen/opencv/cmake/OpenCVModule.cmake;1352;ocv_add_test_from_target;/home/nguyen/opencv/cmake/OpenCVModule.cmake;1110;ocv_add_accuracy_tests;/home/nguyen/opencv/modules/ml/CMakeLists.txt;2;ocv_define_module;/home/nguyen/opencv/modules/ml/CMakeLists.txt;0;")
