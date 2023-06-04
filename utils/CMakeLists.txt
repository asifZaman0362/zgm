cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(utils)

add_subdirectory(cpplogger)
add_library(${PROJECT_NAME} src/format.cpp src/stdio.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC logger)
