cmake_minimum_required(VERSION 3.21)
project(Cherno)

set(CMAKE_CXX_STANDARD 20)
set(INC_DIR ./include)
set(SRC_DIR ./src)

file(GLOB_RECURSE SOURCES
        "${INC_DIR}/*.h"
        "${SRC_DIR}/*.cpp")

add_executable(${PROJECT_NAME} Code11_Strings.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${INC_DIR})

