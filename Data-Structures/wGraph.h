//
// Created by guila on 23/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
#define INT_MAX 32000

class wGraph {
private:
    int size;
    int nVert;
    int** g;


public:

    struct edge{
        int src, dest, weight;
    };

    int getSize();

    int getNVert();

    edge* getEdges(){
        return e;
    }

    wGraph(int tam=0);

    void addNode(int i, int j, int weight);

    void print();

    int* djkistra(int iNode=0);
    //djkistra aux
    int minDist(int* d, bool* v);
private:
    edge* e;
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_WGRAPH_H
