#include <iostream>
#include "lista.h"
#include "binaryTree.h"

int main(){
    binaryTree b;
    b.add(14);
    b.add(16);
    b.add(10);
    b.add(13);
    b.add(6);
    b.add(15);
    b.add(20);
    b.add(22);
    b.inOrder(b.root());
    cout << '\n';
    b.del(14);
    b.inOrder(b.root());
    return 0;
}
