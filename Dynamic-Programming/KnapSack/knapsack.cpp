//
// Created by guila on 09/05/18.
//

#include "knapsack.h"

utility a;

knapsack::knapsack(long* val,long valSize, long* wg, long sackP){
    values = val;
    pesos = wg;
    sackPeso = sackP;
    size = valSize;
}

long knapsack::simpleKnap() {
    long n = size;
    long result[n+1][sackPeso+1];
    for (long i = 0; i <= n; i++)
    {
        for (long w = 0; w <= sackPeso; w++)
        {
            if (i==0 || w==0)
                result[i][w] = 0;
            else if (pesos[i-1] <= w)
                result[i][w] = a.max(values[i-1] + result[i-1][w-pesos[i-1]],  result[i-1][w]);
            else
                result[i][w] = result[i-1][w];
        }
    }
    return result[n][sackPeso];
}

