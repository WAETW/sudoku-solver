//
// Created by WAE on 2022/12/6.
//

#ifndef SUDOKU_SOLVER_SOLVER_H
#define SUDOKU_SOLVER_SOLVER_H
#include "board.h"

class Solver : public  Board{
    std::vector<std::vector<int>>* board;
public:
    bool isValid(int x, int y, int val);
    bool dfs(int i, int j);
    Solver(){
        board = readBoard();
    }
};


#endif //SUDOKU_SOLVER_SOLVER_H
