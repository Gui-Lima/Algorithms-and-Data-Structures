//
// Created by guila on 03/05/18.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_MINHEAPSTRUCTURE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_MINHEAPSTRUCTURE_H

#include "iostream"
using namespace std;

class minHeapStructure {
public:
    struct tupla{
        long compare;
        long returned;
    };
private:
    tupla* arr;
    long capacity;
    long size;
public:

    minHeapStructure(long cap){
        size = 0;
        capacity = cap;
        arr = new tupla[cap];
    }

    long length(){
        return size;
    }

    tupla root(){
        return arr[0];
    }

    long parent(long i ){
        return (i-1)/2;
    }

    long leftChild(long i){
        return i*2 + 1;
    }

    long rightChild(long i){
        return i*2 + 2;
    }

    void insert(long key, long returned){
        if(size == capacity){

            return;
        }
        long i = size;
        arr[i].compare = key;
        arr[i].returned = returned;
        size++;

        while(i!= 0 && arr[i].compare < arr[parent(i)].compare){
            tupla temp = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = temp;
            i=parent(i);
        }
    }


    void heapify(long i){
        long smallest = i;
        long l = leftChild(i);
        long r = rightChild(i);
        if(l < size && arr[l].compare < arr[i].compare){
            smallest = l;
        }
        if(r < size && arr[r].compare < arr[smallest].compare){
            smallest = r;
        }
        if(smallest != i){
            tupla temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
            heapify(smallest);
        }
    }

    long pop(){
        if(size <= 0){
            return -1;
        }
        if(size == 1){
            size--;
            return arr[0].returned;
        }

        tupla root = arr[0];
        arr[0] = arr[size -1 ];
        size--;
        heapify(0);
        return root.returned;
    }

    void print(){
        for(long i =0;i<size;i++){
            cout << arr[i].compare << endl;
        }
    }

};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_MINHEAPSTRUCTURE_H
