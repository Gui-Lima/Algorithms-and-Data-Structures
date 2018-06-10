//
// Created by guila on 09/06/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BBKNAPSACK_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BBKNAPSACK_H


class bbKnapSack {
private:
    int* weights;
    int* values;
    int size;
    int sackWeight;
    double* sorted;
public:
    bbKnapSack(int* weights, int* values, int sackWeight, int size);

    double* sortItems();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_BBKNAPSACK_H
