#include <iostream>
#include "avlTree.h"



int main(){
    avlTree a;
    a.insert(a.root(), 13);
    a.insert(a.root(), 9);
    a.insert(a.root(), 15);
    a.insert(a.root(), 6);
    a.insert(a.root(), 5);
    a.preOrder(a.root());
    return 0;
}
