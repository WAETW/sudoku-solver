cmake_minimum_required(VERSION 3.24)
project(sudoku_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(sudoku_solver main.cpp board.cpp board.h Sudoku.cpp Sudoku.h Solver.cpp Solver.h)
