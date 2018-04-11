//
// Created by guila on 07/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H


class quicksort {
private:
    int* arr;
    int capacity;
public:
    quicksort(int* toBeSorted, int capacit);

    int* sort();

    int* qsort(int i,int j, int* arr);

    void print();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H
