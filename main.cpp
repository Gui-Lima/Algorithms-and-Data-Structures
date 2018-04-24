#include <iostream>

//write here what files fo include
#include "Sorting-Algorithms/mergeSort.h"
#include "Sorting-Algorithms/quicksort.h"
#include "Data-Structures/wGraph.h"


int main(){
    wGraph g(4);
    g.addNode(1 ,0, 5);
    g.addNode(1, 2 , 6);
    g.print();
    return 0;
}
