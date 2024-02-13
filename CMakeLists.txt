cmake_minimum_required (VERSION 3.12)

project(CrossPlatformProgramming)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

find_package(Boost COMPONENTS endian)

# Add the Boost include directories
include_directories(${Boost_INCLUDE_DIRS})

# Include sub-projects.
add_subdirectory ("lab1")