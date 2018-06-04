//
// Created by guila on 09/05/18.
//

#include "knapsack.h"

utility a;

knapsack::knapsack(long* val, long* wg, long sackP, long valSize){
    values = val;
    weights = wg;
    sackWeight = sackP;
    size = valSize;
}

long knapsack::simpleKnap() {
    long result[size+1][sackWeight+1];
    for (long i = 0; i <= size; i++)
    {
            for (long w = 0; w <= sackWeight; w++)
        {
            if (i==0 || w==0)
                result[i][w] = 0;
            else if (weights[i-1] <= w)
                result[i][w] = a.max(values[i-1] + result[i-1][w-weights[i-1]],  result[i-1][w]);
            else
                result[i][w] = result[i-1][w];
        }
    }
    return result[size][sackWeight];
}

