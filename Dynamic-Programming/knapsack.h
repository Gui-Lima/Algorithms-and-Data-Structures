//
// Created by guila on 09/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H
#define ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H

#include "../utility.h"

class knapsack {
private:
    long* values;
    long * pesos;
    long sackPeso;
    long size;

public:
    knapsack(long* val, long valSize, long* wg, long sackP);

    long simpleKnap();

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_KNAPSACK_H
