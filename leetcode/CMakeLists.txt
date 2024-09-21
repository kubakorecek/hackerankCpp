# basic setting
cmake_minimum_required(VERSION 3.10)
project(leetcode)

# set c++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# flags for debug
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wreturn-type")

# add executable
add_executable(00-Twosums TwoSums.cpp)


