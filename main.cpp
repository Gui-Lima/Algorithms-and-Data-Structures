#include "iostream"
//write here what files fo include
#include "Sorting-Algorithms/MergeSort/mergeSort.h"
#include "Data-Structures/Graph/Weighted-Graph/wGraph.h"
#include "Data-Structures/Graph/Non-Weight-Graph/graph.h"
#include "Greedy-Algorithms/Djkistra/Djikstra.h"
#include "Greedy-Algorithms/Minimum-Spamming-Tree/Kruskal/kruskal.h"
using namespace std;



int main() {
    wGraph g(9);

    g.addNode(0,1,4);
    g.addNode(0,7,8);
    g.addNode(1,2,8);
    g.addNode(1,7,11);
    g.addNode(7,6,1);
    g.addNode(7,8,7);
    g.addNode(2,8,2);
    g.addNode(2,3,7);
    g.addNode(2,5,4);
    g.addNode(8,6,6);
    g.addNode(6,5,2);
    g.addNode(5,3,14);
    g.addNode(5,4,10);
    g.addNode(3,4,9);

    kruskal k(g, 14);
    k.mst();
    return 0;
}







