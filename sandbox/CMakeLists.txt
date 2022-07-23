cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(zgame-sandbox)

add_executable(${PROJECT_NAME} testscene.hpp source.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC core)
