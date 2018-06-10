//
// Created by guila on 09/06/18.
//

#include "bbKnapSack.h"
#include "../../Sorting-Algorithms/MergeSort/mergeSort.h"
#include <algorithm>
#include "vector"
bbKnapSack::bbKnapSack(int *weights, int *values, int sackWeight, int size) {
    this->weights = weights;
    this->values = values;
    this->sackWeight = sackWeight;
    this->size = size;
    this->sorted = sortItems();
}

double* bbKnapSack::sortItems() {
    double arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = values[i] / weights[i];
    }
    std::vector<double> varr(arr, arr + size);
    std::sort(varr.begin(), varr.end());
    for (int i = 0; i < size; i++) {
        arr[i] = varr[i];
    }
    return arr;
}

