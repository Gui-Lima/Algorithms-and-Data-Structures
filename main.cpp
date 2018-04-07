#include <iostream>
#include "quicksort.h"
using namespace std;
int main(){
    int a[] = {3, 1, 5, 7, 2, 4, 10, 10};
    quicksort q(a, 8);
    q.sort();
    q.print();
    return 0;
}

