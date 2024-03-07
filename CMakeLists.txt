cmake_minimum_required (VERSION 3.12)

project(CrossPlatformProgramming)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

# Include sub-projects.
add_subdirectory ("lab1")
add_subdirectory ("lab2")
add_subdirectory ("lab4")