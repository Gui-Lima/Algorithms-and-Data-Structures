//
// Created by guila on 31/05/18.
//

#include "prim.h"
#define INFINITE 30000
prim::prim(wGraph g, long nVert) {
    this->g = g;
    alredyKnownKeysButNotVisited = new minHeapStructure(nVert);
    result = new wGraph(g.getSize());
}

void prim::mst() {
    long keys[g.getSize()];
    bool visited[g.getSize()];
    long parent[g.getSize()];
    for(int i =0;i<g.getSize();i++){
        keys[i] = INFINITE;
        visited[i] = false;
    }

    keys[0] = 0;
    parent[0] = -1;
    alredyKnownKeysButNotVisited->insert(0,0);
    for(int i =0;i<g.getSize();i++){
        long u = minInKeysNotVisited(visited);
        visited[u] = true;

        result->addNode(u,parent[u],keys[u]);

        for(int j =0;j<g.getSize();j++){
            if(g.getGraph()[u][j] != 0 && !visited[j] && g.getGraph()[u][j] < keys[j]){
                keys[j] = g.getGraph()[u][j];
                alredyKnownKeysButNotVisited->insert(keys[j], j);
                parent[j] = u;
            }
        }
    }

    result->print();
}

long prim::minInKeysNotVisited(bool* visited ) {
    long min = alredyKnownKeysButNotVisited->pop();
    while(visited[min]){
        min = alredyKnownKeysButNotVisited->pop();
    }
    return min;
}
