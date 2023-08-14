cmake_minimum_required(VERSION 3.11)
project(singleton)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(
    inc
)
file(GLOB_RECURSE  AppSrcs src/*.cpp)
add_executable(app  ${AppSrcs})