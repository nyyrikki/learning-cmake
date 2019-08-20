# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.15)

# Project's name
project(hello)

add_subdirectory(say-hello)

add_executable(main main.cpp)

target_link_libraries(main say-hello)
