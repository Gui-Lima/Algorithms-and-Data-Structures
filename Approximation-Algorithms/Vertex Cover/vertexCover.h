//
// Created by guila on 06/06/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_VERTEXCOVER_H
#define ALGORITHMS_AND_DATA_STRUCTURES_VERTEXCOVER_H

#include "../../Data-Structures/Graph/Non-Weight-Graph/graph.h"
#include "vector"


class vertexCover {
private:
    graph toCheckGraph;
    bool* result;
public:
    vertexCover(graph g, int numberOfVertices);

    bool* randomEdgeSolution();

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_VERTEXCOVER_H
