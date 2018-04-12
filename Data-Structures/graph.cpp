//
// Created by guila on 12/04/18.
//

#include "graph.h"


graph::graph(int nNodes) {
    numberOfNodes = nNodes;
    g = new std::vector<int>[numberOfNodes];
}

void graph::addEdge(int i, int j) {
    if(i>numberOfNodes || j>numberOfNodes){

    }
    else{
        g[i].push_back(j);
        g[j].push_back(i);
    }
}