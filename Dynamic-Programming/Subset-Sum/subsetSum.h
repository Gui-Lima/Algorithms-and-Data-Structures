//
// Created by guila on 04/06/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H
#define ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H


class subsetSum {
private:
    int* numbersSet;
    int size;
    int sum;
public:
    subsetSum(int* numbersSet, int sum, int size);

    bool sSum();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_SUBSETSUM_H
