cmake_minimum_required(VERSION 3.5.0)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(PC main.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/hard_drive.h ${MY_INCLUDE_DIR}/kbd.h)

target_include_directories(PC PUBLIC ${MY_INCLUDE_DIR}) 
