//
// Created by guila on 01/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
#define ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H

#include "../Data-Structures/disjointSet.h"
#include "../Data-Structures/wGraph.h"
#include "../Sorting-Algorithms/quicksort.h"

class krustal {
private:

    disjointSet d;
    wGraph g;
    wGraph::edge* e;

public:


    krustal(wGraph gk);

    void mst();

    wGraph::edge* quickSortDiferenciado(int initial, int final,wGraph::edge* arr);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
