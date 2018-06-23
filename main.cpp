#include "iostream"
//write here what files fo include
#include "Approximation-Algorithms/Bin-Packing/binPacking.h"
#include "Approximation-Algorithms/Vertex Cover/vertexCover.h"
#include "Backtrack/Subset Sum/SubsetSum.h"
#include "Data-Structures/Graph/Weighted-Graph/wGraph.h"


using namespace std;



int main() {
    wGraph g(4);
    g.addNode(0, 1, 2);
    g.addNode(1, 2, 2);
    g.addNode(0, 2, 3);
    g.bfs(0);


    return 0;
}







