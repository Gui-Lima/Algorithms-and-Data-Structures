//define
// Created by guila on 29/05/18.
//

#include <list>
#include "Djikstra.h"
#define INFINITE 30000

Djikstra::Djikstra(wGraph g, long numberOfVertices) {
    this->g = g;
    h = new minHeapStructure(numberOfVertices);
    distances = new long[g.getSize()];
}

long *Djikstra::minimumDistance(long src, long dest) {

    bool distancesanceAlredyKnow[g.getSize()];

    for(int i =0;i<g.getSize();i++){
        distances[i] = INFINITE;
        distancesanceAlredyKnow[i] = false;
    }
    distances[src] = 0;
    h->insert(0, src);

    for(int i =0;i<g.getSize();i++){
        long minDistNonVisitedEdge = minimumTemporaryDist(distancesanceAlredyKnow);
        distancesanceAlredyKnow[minDistNonVisitedEdge] = true;
        if(distancesanceAlredyKnow[minDistNonVisitedEdge] == dest){
            cout << "Distance from " << src << " to " << dest << " is " << distances[dest] << endl;
            return distances;
        }

        for(int j =0;j<g.getSize();j++){
            if( g.getGraph()[minDistNonVisitedEdge][j] !=0 && !distancesanceAlredyKnow[j] && distances[j] > distances[minDistNonVisitedEdge] + g.getGraph()[minDistNonVisitedEdge][j]){
                distances[j] = distances[minDistNonVisitedEdge] + g.getGraph()[minDistNonVisitedEdge][j];
                h->insert(distances[j], j);
            }
        }


    }
    cout << "Distance from " << src << " to " << dest << " is " << distances[dest] << endl;
    return distances;
}

long Djikstra::minimumTemporaryDist(const bool *visited) {
    long min = h->pop();
    while(visited[min]){
        min = h->pop();
    }
    return min;
}
