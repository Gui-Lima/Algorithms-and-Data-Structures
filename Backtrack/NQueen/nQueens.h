//
// Created by guila on 22/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_NQUEENS_H
#define ALGORITHMS_AND_DATA_STRUCTURES_NQUEENS_H


class nQueens {
private:
    int** board;
    int size;

public:
    nQueens(int size);
    void print();

    bool solveQueen(int col =0);
    bool solveAllQueens(int col=0);
    bool isSafe(int row, int col);

    bool solveOneQueenPlaced(int i, int j);
    //this calls
    bool solveOneQueenPlacedUtil(int col, int i, int j, int &contador, int *linha);
    bool isSafe(int row, int col, int* sol);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_NQUEENS_H
