//
// Created by guila on 09/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H
#define ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H

#include "../../utility.h"

class knapsack {
private:
    long* values;
    long * weights;
    long sackWeight;
    long size;

public:
    knapsack(long* sackValues, long* weightValues, long sackWeight, long itensInTheSack);

    long simpleKnap();

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H
