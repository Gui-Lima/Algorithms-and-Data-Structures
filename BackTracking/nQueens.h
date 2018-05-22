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

    void solve1QueenPlaced(int i, int j);
    //this calls
    bool sqpUtil(int col, int i, int j, int& contador, int* linha);
    bool isSafe(int row, int col, int* sol);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_NQUEENS_H
