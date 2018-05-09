#include "iostream"
//write here what files fo include
#include "vector"
#include "Dynamic-Programming/knapsack.h"
using namespace std;

int main() {

    long val[] = {60, 100, 120};
    long wt[] = {10, 20, 30};
    long  W = 50;
    long valsize = 3;
    knapsack a(val,valsize, wt, W);
    cout << a.simpleKnap();
    return 0;
}



