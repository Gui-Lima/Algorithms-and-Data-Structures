//
// Created by guila on 01/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
#define ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H

#include "../Data-Structures/disjointSet.h"
#include "../Data-Structures/wGraph.h"


class krustal {
private:

    disjointSet d;
    wGraph g;
    wGraph::edge* e;

public:

    wGraph getGraph(){
        return g;
    }

    krustal(wGraph gk);

    long mst();

    wGraph::edge* quickSortDiferenciado(long initial, long final,wGraph::edge* arr);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_KRUSTAL_H
