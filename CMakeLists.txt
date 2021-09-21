cmake_minimum_required(VERSION 3.20)
project(csudoku)

set(CMAKE_CXX_STANDARD 14)

add_executable(csudoku main.cpp sudoku.h sudoku.cpp mloop.cpp mloop.h rngnumb.cpp rngnumb.h numcheck.cpp numcheck.h)
