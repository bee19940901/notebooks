cmake_minimum_required(VERSION 3.25)
project(beetools)

set(CMAKE_CXX_STANDARD 11)

add_executable(beetools main.cpp include/CLI11.hpp include/Utils.hpp src/utils.cpp include/MyCLI.hpp src/MyCLI.cpp)
