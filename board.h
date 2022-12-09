//
// Created by WAE on 2022/12/4.
//

#ifndef SUDOKU_SOLVER_BOARD_H
#define SUDOKU_SOLVER_BOARD_H
#include <vector>
#include <iostream>
#include <fstream>

class Board {
private:
    int N = 9;
    std::vector<std::vector<int>> grids;
public:
    std::vector<std::vector<int>>* readBoard();
    void clearBoard();
    virtual void updateBoard(int x, int y, int val);
    void printBoard();
    void readFromfile();
    Board() {
        grids = std::vector(N, std::vector<int>(N));
    }
};


#endif //SUDOKU_SOLVER_BOARD_H
