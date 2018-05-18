#include "iostream"
//write here what files fo include
#include "Dynamic-Programming/stringProblems.h"
#include "string"

using namespace std;



void inputHandler(){
    string s1;
    while(getline(cin, s1)){
        string s2;
        getline(cin, s2);
        stringProblems sP(s1, s2);
        cout << sP.longestCommonSubSeq() << endl;
    }

}

int main() {
    inputHandler();
    return 0;
}







