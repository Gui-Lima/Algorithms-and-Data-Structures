//
// Created by guila on 01/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
#define ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H

#include "../../../Data-Structures/DisjointSet/disjointSet.h"
#include "../../../Data-Structures/Graph/Weighted-Graph/wGraph.h"

struct edge{
    long src;
    long dest;
    long weight;
};

class kruskal {
private:

    disjointSet d;
    wGraph g;
    edge* e;
    wGraph *result;

public:

    kruskal(wGraph g, long numberOfVertices);

    wGraph* mst();

    edge* sortEdges(long initial, long final, edge* result);

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
