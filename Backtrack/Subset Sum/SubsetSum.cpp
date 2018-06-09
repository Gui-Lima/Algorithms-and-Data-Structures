//
// Created by guila on 06/06/18.
//

#include <vector>
#include "SubsetSum.h"
#include "iostream"
SubsetSum::SubsetSum(int *numberSet, int requiredSum, int size) {
    this->numbersSet = numberSet;
    this->requiredSum = requiredSum;
    this->size = size;
}



bool SubsetSum::solveSum(int start) {
    std::vector<int> numberSet;
    int sum = 0;
    return solveSumUtil(numberSet, start, sum);
}

bool SubsetSum::solveSumUtil(std::vector<int> set, int statePointer, int sumAtual) {
    int actualNumber = numbersSet[statePointer];
    sumAtual += actualNumber;
    set.push_back(actualNumber);
    if(sumAtual == requiredSum){
        for(int i =0;i<set.size();i++){
            std::cout << set[i] << " ";
        }
        return true;
    }

    if(sumAtual > requiredSum){
        return false;
    }


    if(solveSumUtil(set, statePointer+1, sumAtual)){
        return true;
    }
    set.pop_back();
    sumAtual -= actualNumber;
    if(solveSumUtil(set, statePointer+1,sumAtual)){
        return true;
    }

    return false;
}
