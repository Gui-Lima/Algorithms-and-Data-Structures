//
// Created by guila on 02/04/18.
//

#include "hashing.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class hashing{
private:
    string arr[];
    int size;
    int capacity;
public:
    hashing(int capacit){
        arr = new string[capacit];
        for(int i =0;i<capacit;i++){
            arr[i] = NULL;
        }
        size = 0;
        capacity = capacit;
    }

    int hash(std::string x){
        if(size == capacity){
            exceptionArrayFull(x);
        }
        else {
            int i = hashFunc(x);
            if (arr[i] != NULL) {
                handleCollision();
            } else {
                arr[i] = x;
            }
        }
    }

    
    void handleCollision(){

    }


    int hashFunc(std::string x){
        return (x.length() * x.capacity() * random())%capacity;
    }

    int random(){
        int result = rand();
        return result;
    }

    //Pseudo exceptions
    std::string exceptionArrayFull(std::string x){
        std::cout<<"Array is full" << std::endl;
        return x;
    }

};