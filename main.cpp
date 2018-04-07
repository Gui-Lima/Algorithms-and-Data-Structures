#include <iostream>
#include "mergeSort.h"
using namespace std;
int main(){

    int a[] = {3, 1 , 10 , 5 , 2, 6, 8};
    mergeSort ms(a, 7);
    ms.sort();
    ms.print();
    return 0;
}

