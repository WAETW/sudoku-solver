//
// Created by WAE on 2022/12/6.
//

#include "Solver.h"

bool Solver::isValid(int x, int y, int val) {
    for(int i = 0; i < 9;++i){
        if((*board)[i][y] == val)
            return false;
    }
    for(int j = 0;j < 9;++j){
        if((*board)[x][j] == val)
            return false;
    }
    int row = x - (x % 3);
    int col = y - (y % 3);
    for(int i = 0; i < 3; ++i){
        for(int j = 0;j < 3;++j){
            if((*board)[i + row][j + col] == val)
                return false;
        }
    }
}

bool Solver::dfs(int i, int k) {

}