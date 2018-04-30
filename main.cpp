#include <iostream>
#include "vector"
//write here what files fo include
#include "Data-Structures/disjointSet.h"

using namespace std;

int main(){
   disjointSet a;
   a.makeSet(1);
   a.makeSet(2);
   a.makeSet(3);
   a.uniao(1, 2);
   cout << a.find(3)->data << endl;
    return 0;
}
