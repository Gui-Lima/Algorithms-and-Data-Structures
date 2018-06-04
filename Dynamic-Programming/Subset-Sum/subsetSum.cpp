//
// Created by guila on 04/06/18.
//

#include "subsetSum.h"

subsetSum::subsetSum(int *numbersSet, int sum, int size) {
    this->numbersSet = numbersSet;
    this->sum = sum;
    this->size = size;
}

bool subsetSum::sSum() {
    bool dpTable[size+1][sum+1];
    //All rows are true
    for(int i =0;i<size+1;i++){
        dpTable[i][0] = true;
    }
    //All columns except [0][0] are false
    for(int i =1;i<sum+1;i++){
        dpTable[0][i] = false;
    }

    for(int i=1;i<size+1;i++){
        for(int j =1;j<sum+1;j++){
            if(j < numbersSet[i-1]){
                dpTable[i][j] = dpTable[i-1][j];
            }
            else if(j >= numbersSet[i-1]){
                dpTable[i][j] = dpTable[i-1][j] || dpTable[i-1][j-numbersSet[i-1]];
            }
        }
    }

    return dpTable[size][sum];
}
