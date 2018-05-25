//
// Created by guila on 09/05/18.
//

#include "utility.h"

void utility::swap(long &a, long &b) {
    long aux = a;
    a = b;
    b = aux;
}

long utility::max(long a, long b) {
    if(a>=b){ return a;}
    if(b>a){return b;}
    return 0;
}

bool utility::isEven(long a) {
    return a % 2 == 0;
}
