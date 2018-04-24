#include <iostream>

//write here what files fo include
#include "Sorting-Algorithms/mergeSort.h"
#include "Sorting-Algorithms/quicksort.h"
#include "Data-Structures/wGraph.h"


int main(){
    wGraph g(7);
    g.addNode(0, 1, 5);
    g.addNode(0, 2, 7);
    g.addNode(1, 3, 10);
    g.addNode(3, 4, 3);
    g.addNode(2, 4, 1);
    g.addNode(1, 5 ,2 );
    g.addNode(4,5,8);
    g.addNode(3,6,4);
    g.addNode(5,6,1);
    g.print();
    g.djkistra(0);
    return 0;
}
