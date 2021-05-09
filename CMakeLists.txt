cmake_minimum_required(VERSION 3.17)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm
        README.md main.cpp src/stack_lt.cpp src/stack_lt.h src/backtracking.cpp src/backtracking.h src/utils/print_utils.cpp src/utils/print_utils.h src/utils/contain_inc.h)
