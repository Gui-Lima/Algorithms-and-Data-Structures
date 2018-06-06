#include "iostream"
//write here what files fo include
#include "Approximation-Algorithms/Bin-Packing/binPacking.h"
#include "Approximation-Algorithms/Vertex Cover/vertexCover.h"


using namespace std;



int main() {
    graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    vertexCover vc(g, 6);
    vc.randomEdgeSolution();
    return 0;
}







