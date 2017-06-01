cmake_minimum_required(VERSION 3.6)
project(lab4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp hex_print.cc hex_print.h bin_print.cc bin_print.h)

add_executable(lab4 ${SOURCE_FILES})