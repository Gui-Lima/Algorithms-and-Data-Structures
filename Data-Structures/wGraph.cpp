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
        for(int j =0;j<size;j++){
            g[i] = new int[size];
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