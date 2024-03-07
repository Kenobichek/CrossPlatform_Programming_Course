cmake_minimum_required (VERSION 3.12)

set(CMAKE_AUTOMOC ON)

# Add source to this project's executable.
file(GLOB lab4_files "*")

add_executable(lab4 ${lab4_files})

# Connection of Qt libraries
find_package(Qt5 COMPONENTS Widgets Test REQUIRED)
target_include_directories(lab4 PRIVATE ${Qt5Widgets_INCLUDE_DIRS})
target_compile_options(lab4 PRIVATE ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS})
target_link_libraries(lab4 PRIVATE Qt5::Widgets)
target_link_libraries(lab4 PRIVATE Qt5::Widgets Qt5::Test)
