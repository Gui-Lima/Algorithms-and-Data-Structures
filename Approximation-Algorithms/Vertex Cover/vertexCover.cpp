//
// Created by guila on 06/06/18.
//

#include "vertexCover.h"
#include "iostream"
#include "vector"

vertexCover::vertexCover(graph g, int numberOfVertices) {
    this->toCheckGraph = g;
    result = new bool[g.size()];
}

bool* vertexCover::randomEdgeSolution() {
    int graphSize = toCheckGraph.size();
    bool visited[graphSize];
    for(int i =0;i<graphSize;i++){
        visited[i] = false;
    }

    for(int i =0;i<graphSize;i++){
        if(!visited[i]){
            for(int j =0;j<graphSize;j++){
                if(toCheckGraph.has(i, j) && !visited[j]){
                    visited[i] = true;
                    visited[j] = true;
                    j = graphSize;
                }
            }
        }
    }

    result=visited;
    for(int i =0;i<graphSize;i++){
        if(result[i]){
            std::cout << i << " ";
        }
    }
    return result;
}
