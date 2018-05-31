//
// Created by guila on 30/04/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_DISJOINTSET_H
#define ALGORITHMS_AND_DATA_STRUCTURES_DISJOINTSET_H

#include <vector>
#include "iostream"
#include "map"
using namespace std;

struct Node{
    int rank;
    long data;
    Node* parent;
};

class disjointSet {
private:
    map<long, Node*> easyFind;

public:

    void makeSet(long data);

    void uniao(long data1, long data2);

    Node* find(long data);



};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_DISJOINTSET_H
