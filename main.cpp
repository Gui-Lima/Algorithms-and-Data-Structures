#include "iostream"
//write here what files fo include
#include "Dynamic-Programming/Longest-Common-Subsequence/longestCommonSubsequence.h"

using namespace std;



int main() {

    string a = "aaabb";
    string b = "aaacc";
    longestCommonSubsequence lcs(a,b);
    cout << lcs.longestCommonSubSeq();
    return 0;
}







