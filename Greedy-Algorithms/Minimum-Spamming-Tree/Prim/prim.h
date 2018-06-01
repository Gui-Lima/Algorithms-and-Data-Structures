//
// Created by guila on 31/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_PRIM_H
#define ALGORITHMS_AND_DATA_STRUCTURES_PRIM_H

#include "../../../Data-Structures/Graph/Weighted-Graph/wGraph.h"
#include "../../../Data-Structures/DisjointSet/disjointSet.h"

class prim {
private:
    wGraph g;
    disjointSet d;
    wGraph* result;
    minHeapStructure* mh;
public:
    prim(wGraph g, long numberOfVertices);

    void mst();

    long minInKeysNotVisited(bool* visited);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_PRIM_H
