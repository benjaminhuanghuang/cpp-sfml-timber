cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(timber)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(src)

add_executable(timber src/main.cpp)

target_link_libraries(timber sfml-graphics sfml-audio)