//
// Created by guila on 12/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H

#include "vector"

class graph {
private:
    std::vector<int>*  g;
    int numberOfNodes;
public:
    graph(int nNodes=0);

    void reCreate(int n);

    int size();

    void addEdge(int i, int j);

    void print();

    std::vector<int> bfs(int startingNode);

    void dfs(int startingNode);
    void dfsUtil(int startingNode, bool* visited);

    bool noMoreAdjVisitors(int i, bool* visited);

    bool isColorable(int nColors);
    bool isColorableUtil(int nColors, int* colors, int currentNode);
    bool has(int i, int j);
    bool isSafe(int currentNode, int* colors, int currentColor);

    //Exceptions
    void exceptionNoConnection();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_GRAPH_H
