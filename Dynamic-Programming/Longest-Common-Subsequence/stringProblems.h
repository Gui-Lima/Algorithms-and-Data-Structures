//
// Created by guila on 18/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_STRINGPROBLEMS_H
#define ALGORITHMS_AND_DATA_STRUCTURES_STRINGPROBLEMS_H
#include "iostream"
#include "string"
using namespace std;

class stringProblems {
private:
    string a;
    string b;
public:
    stringProblems(string x, string y);
    long longestCommonSubSeq();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_STRINGPROBLEMS_H
