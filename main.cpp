#include <iostream>
#include "vector"
//write here what files fo include
#include "Data-Structures/disjointSet.h"
#include "Greedy Algorithms/krustal.h"
#include "Data-Structures/wGraph.h"
using namespace std;

int main(){
    wGraph g(9);
    g.addNode(0, 1 ,4);
    g.addNode(0, 7, 8);
    g.addNode(1, 2, 8);
    g.addNode(1, 7, 11);
    g.addNode(2, 8 ,2);
    g.addNode(2, 5 ,4);
    g.addNode(2, 3, 7);
    g.addNode(3, 4, 9);
    g.addNode(3, 5, 14);
    g.addNode(4, 5, 10);
    g.addNode(5, 6, 2);
    g.addNode(6, 7, 1);
    g.addNode(6, 8, 6);
    g.addNode(7, 8 ,7);
    krustal k(g);
    k.mst();

    return 0;
}
