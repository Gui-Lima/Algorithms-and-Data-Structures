//
// Created by guila on 06/06/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H
#define ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H


class SubsetSum {
private:
    int *numbersSet;
    int size;
    int requiredSum;
public:
    SubsetSum(int* numberSet, int requiredSum, int size);

    bool solveSum(int start=0);
    bool solveSumUtil(std::vector<int> set, int statePointer, int sumAtual);

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H
