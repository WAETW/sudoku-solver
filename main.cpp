#include <iostream>
# include "board.h"
#include "Solver.h"
int main() {
    Solver solver;
    solver.printBoard();
    solver.dfs(0, 0);
    solver.printBoard();
    return 0;
}
