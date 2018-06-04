#include "iostream"
//write here what files fo include
#include "Dynamic-Programming/Longest-Common-Subsequence/longestCommonSubsequence.h"
#include "Dynamic-Programming/Subset-Sum/subsetSum.h"

using namespace std;



int main() {
    int a[6] = {3,34,4,12,5,2};
    int n=6;
    int sum =9;
    subsetSum ss(a,sum,n);
    cout << ss.sSum();
    return 0;
}







