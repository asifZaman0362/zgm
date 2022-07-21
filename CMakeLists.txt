cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 22)
project(zgame)

include(core)
include(util)
include(sandbox)

add_library(${CMAKE_PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${CMAKE_PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio)
