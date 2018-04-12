//
// Created by guila on 12/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H

#include "vector"

class graph {
private:
    std::vector<int>*  g;
    int numberOfNodes;
public:
    graph(int nNodes);

    void addEdge(int i, int j);

    void bfs();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H
