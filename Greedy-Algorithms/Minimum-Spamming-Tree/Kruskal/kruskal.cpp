//
// Created by guila on 01/05/18.
//

#include "kruskal.h"

kruskal::kruskal(wGraph g, long nVert) {
    this->g = g;
    e = new edge[nVert];
    result = new wGraph(g.getSize());
    long verticesCounter=0;
    for(int i =0;i<g.getSize();i++){
        d.makeSet(i);
        for(int j = i+1;j<g.getSize();j++){
            if(g.getGraph()[i][j] != 0){
                e[verticesCounter].src = i;
                e[verticesCounter].dest = j;
                e[verticesCounter].weight = g.getGraph()[i][j];
                verticesCounter++;
                if(verticesCounter > nVert){
                    return;
                }
            }
        }
    }
    e = sortEdges(0, nVert-1, e);
}

wGraph* kruskal::mst() {
    long edgeCount = 0;
    while(edgeCount <= result->getSize()){
        long minCostSrc = e[edgeCount].src;
        long minCostDest = e[edgeCount].dest;
        long cost = e[edgeCount].weight;
        if(d.find(minCostSrc)->data != d.find(minCostDest)->data){
            result->addNode(minCostSrc,minCostDest,cost);
            d.uniao(minCostSrc,minCostDest);
        }
        edgeCount++;
    }
    result->print();
    return result;
}

edge * kruskal::sortEdges(long initial, long final, edge *arr) {
    if(initial >= final){
        return arr;
    }
    edge pivot = arr[final];
    long i=initial-1;
    for(long j =initial;j<final;j++){
        if(arr[j].weight < pivot.weight){
            i++;
            edge temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    edge temp = pivot;
    arr[final] = arr[i+1];
    arr[i+1] = temp;
    sortEdges(initial, i, arr);
    sortEdges(i+2, final, arr);
    return arr;
}