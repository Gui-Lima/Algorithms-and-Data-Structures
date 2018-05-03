//
// Created by guila on 23/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define INT_MAX 100000
#include "minHeapStructure.h"

class wGraph {
private:
    long size;
    long nVert;
    long ** g;
    long * d;
    minHeapStructure *h;
public:

    struct edge{
        long src, dest, weight;
    };

    long getSize();

    long getNVert();

    edge* getEdges(){
        return e;
    }


    wGraph(long tam=0, long nvert = 0);

    void addNode(long i, long j, long weight);

    void print();

    long * djkistra(long iNode=0);
    //djkistra aux
    long minDist(long * d, bool* v);

    long minDistHeap(bool * v);
private:
    edge* e;
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
