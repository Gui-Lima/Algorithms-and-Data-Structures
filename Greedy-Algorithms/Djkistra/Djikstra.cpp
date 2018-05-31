//
// Created by guila on 29/05/18.
//

#include "Djikstra.h"

/*
 *
 *
 *

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

long wGraph::minDistHeap(bool *v) {

    long min = h->pop();
    while(v[min]){
        min = h->pop();
    }

    return min;
}

*/