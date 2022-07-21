cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(zgame)

include_directories(utils)
include_directories(core)

set(SOURCES core/game.cpp core/scenemanager.cpp core/input.cpp core/assetmanager.cpp core/scene.cpp utils/logger.cpp)
set(HEADERS core/scenemanager.hpp core/scene.hpp core/input.hpp core/game.hpp utils/format.hpp utils/stdio.hpp utils/logger.hpp core/assetmanager.hpp)
set(SANDBOX_HEADERS )
set(SANDBOX_SOURCES sandbox/source.cpp sandbox/testscene.hpp)

add_library(${CMAKE_PROJECT_NAME} ${SOURCES} ${HEADERS})
add_executable(Sandbox ${HEADERS} ${SANDBOX_HEADERS} ${SANDBOX_SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio)
target_link_libraries(Sandbox zgame)
