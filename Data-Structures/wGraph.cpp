//
// Created by guila on 23/04/18.
//

#include <cstring>
#include "wGraph.h"
#include "iostream"
#define INT_MAX 100000


wGraph::wGraph(long tam, long nvert){
    nVert = nvert;
    size = tam;
    nVertAtual = 0;
    h = new minHeapStructure(nVert);
    d = new long[size];
    e = new edge[nVert];
    g = new long*[size];
    te = new vector<long>[size];
    for(long i =0;i<size;i++){
        g[i] = new long[size];
        for(long j =0;j<size;j++){
            g[i][j] = INT_MAX;
        }
    }
}


void wGraph::addNode(long i, long j, long weight){
    if(weight == 0){
        g[i][j] = weight;
        g[j][i] = weight;
        te[i].push_back(j);
        te[j].push_back(i);
    }
    else if(g[i][j] > weight || g[i][j] == 0){
        g[i][j] = weight;
        g[j][i] = weight;
        te[i].push_back(j);
        te[j].push_back(i);
    }



    e[nVertAtual].dest = j;
    e[nVertAtual].src = i;
    e[nVertAtual].weight = weight;
    nVertAtual++;

}


void wGraph::print(){
    for(long i =0;i<size;i++){
        std::cout<< i << " esta conectado com :";
        for(long j=0;j<size;j++){
            if(g[i][j] < INT_MAX && g[i][j] > 0){
                std::cout << j << " com peso ( " << g[i][j] << " ) ";
            }
        }
        std::cout << std::endl;
    }
}

long* wGraph::djkistra(long iNode) {
    bool v[size];
    for(long i =0;i<size;i++){
        d[i] = INT_MAX;
        v[i] = false;
    }
    //starting from initialNode
    d[iNode] = 0;
    h->insert(0, iNode);
    for(long i = 0;i<size-1;i++){

        long u = minDistHeap(v);
        if(u == -1){
           return d;
        }
        v[u] = true;

        for(long j =0;j<te[u].size();j++){
            long adj = te[u][j];
            long adjW = g[u][adj];
            if(!v[adj] && d[u] + adjW < d[adj]){
                d[adj] = d[u] + adjW;
                h->insert(d[adj], adj);
            }
        }

    }

    for(long i=0;i<size;i++){
        std::cout << "minimal distance from " << iNode << " to " << i << " is " << d[i] << std::endl;
    }

    return d;
}
long* wGraph::newdjkistra(long iNode, long final) {
    bool v[size];
    vector <long> Q;
    for(long i =0;i<size;i++){
        d[i] = INT_MAX;
        v[i] = false;
        Q.push_back(i);
    }
    //starting from initialNode
    d[iNode] = 0;
    h->insert(0, iNode);
    for(long i = 0;i<size-1;i++){
        long u = minDistHeap(v);
        if(u == -1){
            return d;
        }
        v[u] = true;

        for(long j =0;j<te[u].size();j++){
            long adj = te[u][j];
            long adjW = g[u][adj];
            if(!v[adj] && d[u] + adjW < d[adj]){
                d[adj] = d[u] + adjW;
                h->insert(d[adj], adj);
            }
        }
        if(u==final){
            return d;
        }
    }
    return d;
}

long wGraph::minDist(long *d, bool *v) {
    long min = INT_MAX;
    long result;
    for(long i =0;i<size;i++){
        if(d[i] < min && !v[i]){
            min = d[i];
            result = i;
        }
    }
    return result;
}



long wGraph::getSize() {
    return size;
}

long wGraph::getNVert() {
    return nVert;
}

long wGraph::minDistHeap(bool *v) {

    long min = h->pop();
    while(v[min]){
        min = h->pop();
    }

    return min;
}
