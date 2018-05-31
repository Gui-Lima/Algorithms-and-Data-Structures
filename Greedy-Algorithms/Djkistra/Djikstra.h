//
// Created by guila on 29/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_DJIKSTRA_H
#define ALGORITHMS_AND_DATA_STRUCTURES_DJIKSTRA_H
#include "../../Data-Structures/Heap/Modified/minHeapStructure.h"
#include "../../Data-Structures/Graph/Weighted-Graph/wGraph.h"

class Djikstra {
private:
    minHeapStructure *h;
    wGraph g;
    long numberOfVertices;
    long* distances;
public:
    explicit Djikstra(wGraph g, long nVert);

    long* minimumDistance(long source, long dest=-1);
    long minimumTemporaryDist(const bool* visited);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_DJIKSTRA_H
