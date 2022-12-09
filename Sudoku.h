//
// Created by WAE on 2022/12/4.
//

#ifndef SUDOKU_SOLVER_SUDOKU_H
#define SUDOKU_SOLVER_SUDOKU_H
#include "board.h"
#include <random>

class Sudoku : public Board{
private:
    std::vector<std::vector<int>>* board;
public:
    virtual void updateBoard();
    void fillBoard();
    void fillDiagonal();
    void fillRow();
    void fillCol();
    void fillMatrix();
    bool checkRowUnusedNum(int num, int i);
    bool checkColUnusedNum(int num, int i);
    int randomGenerator();
};


#endif //SUDOKU_SOLVER_SUDOKU_H
