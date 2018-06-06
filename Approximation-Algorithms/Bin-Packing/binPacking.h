//
// Created by guila on 06/06/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BINPACKING_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BINPACKING_H


class binPacking {
private:
    int* itemWeights;
    int binCapacity;
    int size;
public:
    binPacking(int* weights, int binCapacity, int size);
    bool fits(int item, int capacity);
    int firstFit();
    int bestFit();
    int nextFit();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_BINPACKING_H
