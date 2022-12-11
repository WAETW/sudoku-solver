//
// Created by WAE on 2022/12/4.
//

#include "board.h"

void Board::clearBoard() {
    grids = std::vector<std::vector<int>>(N, std::vector<int> (N));
}

std::vector<std::vector<int>>* Board::readBoard() {
    return &grids;
}

void Board::updateBoard(int x, int y, int val) {
    grids[x][y] = val;
}

void Board::readFromfile() {
    std::ifstream ifs("C:\\Users\\WAE\\CLionProjects\\sudoku-solver\\input\\input1.txt", std::ios::in);
    int input = 0, i = 0, j = 0;
    while (ifs >> input) {
        grids[i][j] = input;
        i++;
        if(i == 9){
            j++;
            i = 0;
        }
    }
    ifs.close();
}

void Board::printBoard() {
    std::cout<<"======Print Board======\n";
    for(auto &grid: grids){
        for(auto &cell : grid){
            std::cout << cell <<" ";
        }
        std::cout <<"\n";
    }
}