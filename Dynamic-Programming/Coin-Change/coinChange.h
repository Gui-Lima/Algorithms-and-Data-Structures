//
// Created by guila on 16/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_COINCHANGE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_COINCHANGE_H


class coinChange {
private:
    long* coins;
    long nCoins;
    long valor;
public:
    coinChange(long* coins, long ncoins, long value);

    long minNumberCoin();

    long minCoinValue();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_COINCHANGE_H
