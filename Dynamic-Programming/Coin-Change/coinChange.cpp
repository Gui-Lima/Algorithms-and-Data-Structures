//
// Created by guila on 16/05/18.
//

#include "coinChange.h"
#define INT_MAX 300000
#include "iostream"
#define MAX_COIN_VALUE 20000

coinChange::coinChange(long *coins, long ncoins, long value) {
    this->coins = coins;
    this->nCoins = ncoins;
    this->valor = value;
}

long coinChange::minNumberCoin() {
    long table[valor + 1 ];
    table[0] = 0;
    for(long i =1;i<valor + 1;i++){
        table[i] = INT_MAX;
    }

    for(long i=1;i<valor + 1;i++){

        for(long j=0;j<nCoins;j++){
            if(coins[j] <= i){
                long auxRes = table[i - coins[j]];
                if(auxRes != INT_MAX && auxRes + 1  < table[i]){
                    table[i] = auxRes + 1;
                }
            }
        }
    }


    return table[valor];

}
long coinChange::minCoinValue() {
    long needed[MAX_COIN_VALUE] = {};
    needed[0] = 1;
    long auxCoin=0;

    for(long i=0;i<nCoins;i++){
        long currentCoin = coins[i];
        auxCoin += currentCoin;
        if(auxCoin > MAX_COIN_VALUE) {
            auxCoin = MAX_COIN_VALUE -1;
        }
        for(long j =auxCoin;j>=currentCoin;j--){
            if(needed[j] == 0 || needed[j] > needed[j-currentCoin]+1) {
                if(needed[j-currentCoin]) {
                    needed[j] = needed[j-currentCoin]+1;
                }
            }
        }
    }
    long aux = valor;
    while(needed[aux] == 0){
        aux++;
    }
    std::cout << aux << " " << needed[aux]-1 << std::endl;

}