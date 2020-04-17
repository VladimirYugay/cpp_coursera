cmake_minimum_required(VERSION 3.9.1)

project(PhoneNumber)
include_directories(${PROJECT_SOURCE_DIR})

add_executable(app main.cpp phone_number.cpp)