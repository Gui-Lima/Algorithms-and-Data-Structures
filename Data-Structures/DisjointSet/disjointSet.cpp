//
// Created by guila on 30/04/18.
//

#include "disjointSet.h"

void disjointSet::makeSet(long data) {
    Node* a = new Node;
    a->data = data;
    a->parent = a;
    a->rank = 0;
    easyFind.insert(pair<long,Node*>(data,a));
}

void disjointSet::uniao(long data1, long data2) {
    Node *node1 = easyFind[data1];
    Node *node2 = easyFind[data2];

    Node* parent1 = find(node1->data);
    Node* parent2 = find(node2->data);

    if(parent1->data == parent2->data){
        return;
    }

    if(parent1->rank >= parent2->rank){
        parent1->rank = (parent1->rank == parent2->rank) ? parent1->rank + 1 : parent1->rank;
        parent2->parent = parent1;
    }
    else{
        parent1->parent = parent2;
    }
}

Node* disjointSet::find(long data) {
    Node* n = easyFind[data];
    while(n->parent->data != n->data){
        n = n->parent;
    }
    return n;
}



