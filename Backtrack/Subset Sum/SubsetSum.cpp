//
// Created by guila on 06/06/18.
//

#include "SubsetSum.h"

SubsetSum::SubsetSum(int *numberSet, int requiredSum, int size) {
    this->numbersSet = numberSet;
    this->requiredSum = requiredSum;
    this->size = size;
}

bool SubsetSum::solveSum(int start) {
    if(start > size){
        return true;
    }


    return false;
}
