cmake_minimum_required(VERSION 3.5.0)
project(surgery VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(surgery src/main.cpp include/tools.h)
target_include_directories(surgery PUBLIC include) 

