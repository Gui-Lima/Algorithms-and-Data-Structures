#include "iostream"
//write here what files fo include
#include "Approximation-Algorithms/Bin-Packing/binPacking.h"
#include "Approximation-Algorithms/Vertex Cover/vertexCover.h"
#include "Backtrack/Subset Sum/SubsetSum.h"


using namespace std;



int main() {
    int numberSet[4] = {1,3,5,10};
    int sum = 13;
    SubsetSum ss(numberSet, sum, 4);
    ss.solveSum();

    return 0;
}







