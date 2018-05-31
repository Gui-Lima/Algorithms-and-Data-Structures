//
// Created by guila on 23/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define INT_MAX 100000
#include "../../Heap/Modified/minHeapStructure.h"
#include "vector"

class wGraph {
private:
    long size;
    long ** g;

public:

    long getSize();

    long ** getGraph();

    explicit wGraph(long tam=0);

    void addNode(long i, long j, long weight);

    void print();

    void bfs(long startingNode=0);

    void dfs(long startingNode=0);
    void dfsUtil(long node, bool* visited);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
