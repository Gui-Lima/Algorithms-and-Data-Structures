

#include <list>
#include "wGraph.h"
#include "iostream"
#define INT_MAX 100000


wGraph::wGraph(long tam){
    size = tam;
    g = new long*[size];
    for(long i =0;i<size;i++){
        g[i] = new long[size];
        for(long j =0;j<size;j++){
            g[i][j] = 0;
        }
    }
}


void wGraph::addNode(long i, long j, long weight){
    if(i >= 0 && j>=0 && i<size && j<size){
        g[i][j] = weight;
        g[j][i] = weight;
    }
}

long wGraph::getSize() {
    return size;
}

void wGraph::bfs(long startingNode) {
    bool visited[size];
    for(int i =0;i<size;i++){
        visited[i] = false;
    }

    list <long> nodesQueue;
    nodesQueue.push_front(startingNode);

    while(!nodesQueue.empty()){
        long node = nodesQueue.front();
        cout << node << endl;
        visited[node] = 1;
        nodesQueue.pop_front();
        for(int i =0;i<size;i++){
            if(g[node][i] > 0 && !visited[i]){
                nodesQueue.push_back(i);
            }
        }
    }
}

void wGraph::dfs(long startingNode) {

}

void wGraph::print() {
    for(long i =0;i<size;i++){
        std::cout<< i << " is connected with :";
        for(long j=0;j<size;j++){
            if(g[i][j] < INT_MAX && g[i][j] > 0){
                std::cout << j << " with weight ( " << g[i][j] << " ) ";
            }
        }
        std::cout << std::endl;
    }
}
