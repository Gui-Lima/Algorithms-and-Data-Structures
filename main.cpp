#include <iostream>
#include "vector"
//write here what files fo include

#include "Data-Structures/wGraph.h"
using namespace std;


void inputHandler(){
    long nCases;
    int count = 0;
    cin >> nCases;
    while(nCases--){
        long nServes;
        cin >> nServes;
        long nCables;
        cin >> nCables;
        long src;
        cin >> src;
        long dest;
        cin >> dest;
        wGraph g(nServes, nCables);
        while(nCables--){
            long c1;
            cin >> c1;
            long c2;
            cin >> c2;
            long w;
            cin >> w;
            g.addNode(c1, c2 ,w);
        }
        long * a = g.djkistra(src);
        cout << "Case #" << count + 1 << ": ";
        if(a[dest] < 100000){
            cout << a[dest] << endl;
        }
        else{
            cout << "unreachable" << endl;
        }
        count ++;
    }
}



int main(){
   inputHandler();
    return 0;
}
