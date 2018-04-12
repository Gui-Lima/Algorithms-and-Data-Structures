//
// Created by guila on 12/04/18.
//

#include "graph.h"
#include "iostream"
using namespace std;

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

void graph::bfs() {
    for(int i =0;i<numberOfNodes;i++){
        if(!g[i].empty()){
            cout << "Vertex " << i << " is connected with: ";
            for(int j = 0;j<g[i].size();j++){
                cout << g[i][j];
            }
        }
        cout << endl;
    }
}