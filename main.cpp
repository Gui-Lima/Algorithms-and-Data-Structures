#include "iostream"
//write here what files fo include
#include "Sorting-Algorithms/MergeSort/mergeSort.h"
#include "Data-Structures/Graph/Weighted-Graph/wGraph.h"
#include "Data-Structures/Graph/Non-Weight-Graph/graph.h"
#include "Greedy-Algorithms/Djkistra/Djikstra.h"
#include "Greedy-Algorithms/Minimum-Spamming-Tree/Kruskal/kruskal.h"
#include "Greedy-Algorithms/Minimum-Spamming-Tree/Prim/prim.h"
#include "Dynamic-Programming/KnapSack/knapsack.h"

using namespace std;



int main() {

    long v[4] = {4, 7, 15, 23};
    long w[4] = {1, 2,  5, 7};
    int value = 10;
    knapsack a(v,w,10,4);
    a.simpleKnap();

    return 0;
}







