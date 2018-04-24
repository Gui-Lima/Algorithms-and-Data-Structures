//
// Created by guila on 23/04/18.
//

#include "wGraph.h"
#include "iostream"
#define INT_MAX 32000


wGraph::wGraph(int tam){
    size = tam;
    g = new int*[size];
    for(int i =0;i<size;i++){
        g[i] = new int[size];
        for(int j =0;j<size;j++){
            g[i][j] = INT_MAX;
        }
    }
}


void wGraph::addNode(int i, int j, int weight){
    g[i][j] = weight;
    g[j][i]= weight;
}


void wGraph::print(){
    for(int i =0;i<size;i++){
        std::cout<< i << " esta conectado com :";
        for(int j=0;j<size;j++){
            if(g[i][j] < INT_MAX && g[i][j] > 0){
                std::cout << j << " com peso ( " << g[i][j] << " ) ";
            }
        }
        std::cout << std::endl;
    }
}

int* wGraph::djkistra(int iNode) {
    int d[size];
    bool v[size];
    for(int i =0;i<size;i++){
        d[i] = INT_MAX;
        v[i] = false;
    }
    //starting from initialNode
    d[iNode] = 0;
    for(int i = 0;i<size-1;i++){
        int u = minDist(d, v);

        v[u] = true;
        for(int j =0;j<size;j++){
            int adj = g[u][j];
            if(adj!=INT_MAX && !v[j] && d[u] + adj < d[j]){
                d[j] = d[u] + adj;
            }
        }

    }
    for(int i=0;i<size;i++){
        std::cout << "minimal distance from " << iNode << " to " << i << " is " << d[i] << std::endl;
    }
    return d;
}

int wGraph::minDist(int *d, bool *v) {
    int min = INT_MAX;
    int result;
    for(int i =0;i<size;i++){
        if(d[i] < min && !v[i]){
            min = d[i];
            result = i;
        }
    }
    return result;
}
