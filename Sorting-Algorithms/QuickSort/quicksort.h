//
// Created by guila on 07/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H


class quicksort {
private:
    long* arr;
    long capacity;
public:
    quicksort(long* toBeSorted, long capacit);

    long* sort();

    long* qsort(long i,long j, long* arr);

    void print();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_QUICKSORT_H
