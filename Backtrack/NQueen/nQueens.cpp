//
// Created by guila on 22/05/18.
//

#include "nQueens.h"
#include "iostream"

nQueens::nQueens(int size) {
    board = new int*[size+1];
    for(int i =0;i<=size;i++){
        board[i] = new int[size+1];
        for(int j =0;j<size;j++){
            board[i][j] = 0;
        }
    }
    this->size = size;
}


bool nQueens::solveOneQueenPlaced(int i, int j) {
    int row[size+1];
    int count = 0;
    return solveOneQueenPlacedUtil(1, i, j, count, row);
}



bool nQueens::isSafe(int col, int row, int* sol) {
    for (int i = 1; i <= col - 1; i++) {
        if (sol[i] == row || (abs(sol[i] - row) == abs(i - col))) {
            return false;
        }
    }
    return true;
}




bool nQueens::solveOneQueenPlacedUtil(int col, int rw, int co, int &cont, int *sol) {
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
                solveOneQueenPlacedUtil(col + 1, rw, co, cont, sol);
            }
        }
    }
}

bool nQueens::solveQueen(int col) {
   if (size <= col){
       return true;
   }

   for(int i =0;i<size;i++){
       if(isSafe(i, col)){
           board[i][col] =1;
           if(solveQueen(++col)){
               return true;
           }
           col--;
           board[i][col] = 0;
       }
   }

   return false;
}

bool nQueens::solveAllQueens(int col) {
    if (size <= col){
        print();
        return false;
    }

    for(int i =0;i<size;i++){
        if(isSafe(i, col)){
            board[i][col] =1;
            if(solveAllQueens(++col)){
                return true;
            }
            col--;
            board[i][col] = 0;
        }
    }

    return false;
}

bool nQueens::isSafe(int row, int col) {
    for(int j =col;j>=0;j--){
        if(board[row][j]){
            return false;
        }
    }
    for (int i=row,j=col; i>=0 && j>=0; i--, j--){
        if (board[i][j]){
            return false;
        }
    }
    for (int i=row, j=col; j>=0 && i<size; i++, j--){
        if (board[i][j]){
            return false;
        }
    }
    return true;
}

void nQueens::print() {
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout <<'\n';
}


