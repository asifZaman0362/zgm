cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(core)

set(SOURCES 
    src/scenemanager.cpp
    src/scene.cpp 
    src/input.cpp 
    src/game.cpp 
    src/assetmanager.cpp
    src/systems/animation.cpp
    src/systems/collision.cpp
)

set(HEADERS
    include/assetmanager.hpp
    include/game.hpp
    include/input.hpp
    include/scene.hpp
    include/scenemanager.hpp
    include/systems/animation.hpp
    include/systems/collision.hpp
)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC sfml-system sfml-window sfml-graphics sfml-audio utils logger)
