//
// Created by guila on 23/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define INT_MAX 32000

class wGraph {
private:
    int size;
    int** g;
public:

    wGraph(int tam=0);

    void addNode(int i, int j, int weight);

    void print();

    int* djkistra(int iNode=0);
    //djkistra aux
    int minDist(int* d, bool* v);
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
