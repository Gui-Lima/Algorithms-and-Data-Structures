//
// Created by guila on 06/06/18.
//

#include "binPacking.h"



binPacking::binPacking(int *weights, int binCapacity, int size) {
    this->itemWeights = weights;
    this->size = size;
    this->binCapacity = binCapacity;
}

int binPacking::nextFit() {
    int numberOfBinsRequired=0;
    int momentaryCapacity=binCapacity;

    for(int i =0;i<size;i++){
        if(fits(itemWeights[i], momentaryCapacity)){
            momentaryCapacity -= itemWeights[i];
        }
        else{
            numberOfBinsRequired++;
            momentaryCapacity = binCapacity - itemWeights[i];
        }
    }
    return numberOfBinsRequired;
}

int binPacking::firstFit() {
    int numberOfBinsRequired=0;
    int eachBinMomentaryCapacity[size];
    bool visited[size];
    for(int i =0;i<size;i++){
        eachBinMomentaryCapacity[i] = binCapacity;
        visited[i] = false;
    }

    for(int i = 0;i<size;i++){
        for(int j =0;j<size;j++){

            if(fits(itemWeights[j], eachBinMomentaryCapacity[i]) && !visited[j]){
                eachBinMomentaryCapacity[i] -= itemWeights[j];
                visited[j] = true;
            }
        }

    }
    for(int i =0;i<size;i++){

        if(eachBinMomentaryCapacity[i] != binCapacity){
            numberOfBinsRequired++;
        }
    }
    return numberOfBinsRequired;
}

int binPacking::bestFit() {
    return 0;
}

bool binPacking::fits(int item, int capacity) {
    return item <= capacity;
}
