#include "iostream"
//write here what files fo include
#include "Sorting-Algorithms/MergeSort/mergeSort.h"
#include "Data-Structures/Graph/Weighted-Graph/wGraph.h"
#include "Data-Structures/Graph/Non-Weight-Graph/graph.h"

using namespace std;



int main() {
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.dfs(2);
    return 0;
}







