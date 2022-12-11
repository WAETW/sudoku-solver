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
    return true;
}

bool Solver::dfs(int i, int j) {
    if (i == 9)
        return true;
    if (j >= 9)
        return dfs(i + 1, 0);
    if ((*board)[i][j] != 0)
        return dfs(i, j + 1);
    for (int c = 1; c <= 9; ++c) {
        if (!isValid(i , j, c))
            continue;
        (*board)[i][j] = c;
        if (dfs(i,j + 1))
            return true;
        (*board)[i][j] = 0;
    }
    return false;
}