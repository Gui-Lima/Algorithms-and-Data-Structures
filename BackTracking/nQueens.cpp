//
// Created by guila on 22/05/18.
//

#include "nQueens.h"
#include "iostream"

nQueens::nQueens(int size) {
    board = new int*[size+1];
    for(int i =0;i<=size;i++){
        board[i] = new int[size+1];
    }
    this->size = size;
}

void nQueens::solve1QueenPlaced(int i, int j) {
    int row[size+1];
    int count = 0;
    sqpUtil(1, i , j, count,row);
}

bool nQueens::isSafe(int col, int row, int* sol) {
    for (int i = 1; i <= col - 1; i++) {
        if (sol[i] == row || (abs(sol[i] - row) == abs(i - col))) {
            return false;
        }
    }

    return true;
}

bool nQueens::sqpUtil(int col,int rw, int co,int& cont, int* sol) {
    for (int row = 1; row <= 8; row++) {
        if (isSafe(col, row, sol)) {
            sol[col] = row;
            if (col == 8 && sol[co] == rw){
                printf("%2d      %d", ++cont, sol[1]);
                for (int j = 2; j <= 8; j++){
                    printf(" %d", sol[j]);
                }
                std::cout << "" << std::endl;
            }
            else {
                sqpUtil(col + 1, rw,co,cont,sol);
            }
        }
    }
}
