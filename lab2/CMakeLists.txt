cmake_minimum_required (VERSION 3.12)

set(CMAKE_AUTOMOC ON)

# Add source to this project's executable.
file(GLOB lab2_files "*")

add_executable(lab2 ${lab2_files})

# Connection of Qt libraries
find_package(Qt5 COMPONENTS Widgets REQUIRED)
target_include_directories(lab2 PRIVATE ${Qt5Widgets_INCLUDE_DIRS})
target_compile_options(lab2 PRIVATE ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS})
target_link_libraries(lab2 PRIVATE Qt5::Widgets)
