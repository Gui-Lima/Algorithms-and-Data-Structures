#include <iostream>
#include "hashing.h"

int main(){
    hashing a(10);
    a.hash("Batata");
    a.hash("Pneu");
    a.hash("juota");
    a.hash("Gota");
    a.hash("0604042462");
    a.hash("eeee");
    a.hash("aaaa");
    a.search("aaaa");
    a.print();
    return 0;
}

