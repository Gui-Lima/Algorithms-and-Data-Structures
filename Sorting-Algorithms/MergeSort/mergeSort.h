//
// Created by guila on 07/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_MERGESORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_MERGESORT_H


class mergeSort {
private:
    int* arr;
    int capacity;
public:
    mergeSort(int * toBeSorted, int capacit);

    int* rArr();

    int* sort();

    int* split(int initial, int final, int* ar);

    int* merge(int initial, int median, int final, int* arr);

    void print();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_MERGESORT_H
