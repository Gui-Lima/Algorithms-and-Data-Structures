#include "iostream"
//write here what files fo include
#include "Approximation-Algorithms/Bin-Packing/binPacking.h"


using namespace std;



int main() {
    int weight[] = {2, 5, 4, 7, 1, 3, 8};
    int c = 10;
    int n = sizeof(weight) / sizeof(weight[0]);
    binPacking bp(weight,10,n);
    cout << bp.firstFit();
    return 0;
}







