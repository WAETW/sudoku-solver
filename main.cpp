#include <iostream>
# include "board.h"
int main() {
    Board boards;
    boards.readFromfile();
    boards.printBoard();
    return 0;
}
