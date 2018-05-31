#include "iostream"
//write here what files fo include
#include "Sorting-Algorithms/MergeSort/mergeSort.h"
#include "Data-Structures/Graph/Weighted-Graph/wGraph.h"
#include "Data-Structures/Graph/Non-Weight-Graph/graph.h"
#include "Greedy-Algorithms/Djkistra/Djikstra.h"

using namespace std;



int main() {
    wGraph g(7);
    g.addNode(0,1,5);
    g.addNode(0,2,2);
    g.addNode(0,3,1);
    g.addNode(2,5,5);
    g.addNode(2,4,3);
    g.addNode(1,6,3);
    g.addNode(0,5,8);
    Djikstra d(g, 6);
    d.minimumDistance(0,5);
    return 0;
}







