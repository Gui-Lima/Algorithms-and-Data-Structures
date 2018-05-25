//
// Created by guila on 25/05/18.
//

#include "division.h"
#include "../utility.h"
#include <cmath>
#define MAX 100000

utility util;

division::division(int n) {
    this->divRes = n;
}

bool division::fiveDigitDivision(long abcde, long fghij) {
    //using bitwise operations that im training
    if (abcde >= MAX){
        return false;
    }
    int Aux, check = 0;
    for (int i = 0; i < 5; i++) {
        Aux = (int) (abcde / pow(10, i)) % 10;
        if (!util.isEven(check/pow(2, Aux))){
            return false;
        }
        int temp = (int) pow(2,Aux);
        check = check | temp;
    }
    for (int i = 0; i < 5; i++) {
        Aux = (int) (fghij / pow(10, i)) % 10;
        if (!util.isEven(check/pow(2, Aux))){
            return false;
        }
        int temp = (int) pow(2,Aux);
        check = check | temp;
    }

    return true;
}
