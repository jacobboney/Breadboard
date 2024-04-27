cmake_minimum_required(VERSION 3.1)

project(Breadboard LANGUAGES CXX)

set(SOURCE_FILES)

add_subdirectory(Breadboard)
add_subdirectory(Connectors)

add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})