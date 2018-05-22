#include "iostream"
//write here what files fo include
#include "BackTracking/nQueens.h"
#include "string"

using namespace std;

void inputHandler(){
    int nCases;
    cin >>  nCases;
    while(nCases--){
        int i;
        cin >> i;
        int j;
        cin >> j;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        nQueens nq(8);
        nq.solve1QueenPlaced(i,j);
        if (nCases) {
            printf("\n");
        }

    }
}

int main() {
    inputHandler();
    return 0;
}







