cmake_minimum_required (VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source to this project's executable.
file(GLOB lab1_files "*.h" "*.cc")

add_executable(lab1 ${lab1_files})

# Додавання бібліотек Boost до lab1
find_package(Boost COMPONENTS REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(lab1 PRIVATE ${Boost_LIBRARIES})
