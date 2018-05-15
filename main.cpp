#include "iostream"
//write here what files fo include
#include "Data-Structures/graph.h"


using namespace std;

int main() {
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1,2);
    g.print();
    return 0;
}




