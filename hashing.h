//
// Created by guila on 02/04/18.
//


#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class hashing{
private:
    string* arr;
    int size;
    int capacity;
    int nCol;
public:
    hashing(int capacit){
        arr = new string[capacit];
        for(int i = 0;i<capacit;i++){
            arr[i].clear();
        }
        size = 0;
        capacity = capacit;
        nCol = 0;
    }

    int hash(std::string x){
        if(size == capacity){
            exceptionArrayFull(x);
        }
        else {
            int i = hashFunc(x);
            if (!arr[i].empty() || arr[i].compare("Ja teve algo aqui, agora mais nada") == 0) {
                arr[handleCollision(i)] =  x;
            } else {
                arr[i] = x;
            }
        }
        size++;
    }


    int handleCollision(int i){
        while(!arr[i].empty() || arr[i].compare("Ja teve algo aqui, agora mais nada") == 0){
            i++;
            if(i == capacity) {
                i = 0;
            }
        }
        nCol++;
        return i;
    }


    int hashFunc(std::string x){
        int hashedValue = (x.length() % (541 * 1223)) % capacity;
        return hashedValue;
    }

    long long random(){
        long long result = rand();
        if(result < 0){
            result = result * -1;
        }
        return result;
    }

    void print(){
        for(int i = 0;i<capacity;i++){
            cout << "At index " << i << " theres is " << arr[i] << endl;
        }
        cout << "Number of collision was " << nCol << endl;
    }

    string remove(string x){
        int toRemove = search(x);
        arr[toRemove] = "Ja teve algo aqui, agora mais nada";
        cout << "Elemento " << x << " removido" << endl;
        return arr[toRemove];
    }

    int search(string x){
        int i = hashFunc(x);

        if(arr[i].compare(x) == 0){
            cout << "Found " << x << " on " << i << endl;
            return i;
        }

        if(arr[i].empty()){
            cout << "No findings on searching " << x << endl;
            return 0;
        }

        if(arr[i].compare("Ja teve algo aqui, agora mais nada") == 0 || arr[i].compare(x) != 0 ){
            int initialI = i;
            while(arr[i].compare("Ja teve algo aqui, agora mais nada") == 0 || arr[i].compare(x) != 0){
                i++;
                if(i == capacity){
                    i==0;
                }
                if(i == initialI){
                    cout << "No findings on searching " << x << endl;
                    return 0;
                }
            }
            if(arr[i].compare(x) == 0){
                cout << "Found " << x << " in " << i << endl;
                return i;
            }
        }


    }
    //Pseudo exceptions
    std::string exceptionArrayFull(std::string x){
        std::cout<<"Array is full" << std::endl;
        return x;
    }

};

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_HASHING_H
#define ALGORITHMS_AND_DATA_STRUCTURES_HASHING_H

#endif //ALGORITHMS_AND_DATA_STRUCTURES_HASHING_H
