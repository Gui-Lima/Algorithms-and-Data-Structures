//
// Created by guili on 13/03/2018.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_MINHEAP_H
#define ALGORITHMS_AND_DATA_STRUCTURES_MINHEAP_H

#include "stdio.h"
#include "iostream"
using namespace std;



class minHeap {
private:
    long* arr;
    long capacity;
    long size;
    long* sortArr;
public:
    minHeap(long cap){
        size = 0;
        capacity = cap;
        arr = new long[cap];
    }

    long length(){
        return size;
    }

    long root(){
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

    void insert(long key){
        if(size == capacity){
            cout << "Full" << endl;
            return;
        }
        long i = size;
        arr[i] = key;
        size++;

        while(i!= 0 && arr[i] < arr[parent(i)]){
            long temp = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = temp;
            i=parent(i);
        }
    }


    void heapify(long i){
        long smallest = i;
        long l = leftChild(i);
        long r = rightChild(i);
        if(l < size && arr[l] < arr[i]){
            smallest = l;
        }
        if(r < size && arr[r] < arr[smallest]){
            smallest = r;
        }
        if(smallest != i){
            long temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
            heapify(smallest);
        }
    }

    long pop(){
        if(size <= 0){
            cout << "tem oq remover nao" << endl;
            return -1;
        }
        if(size == 1){
            size--;
            return arr[0];
        }

        long root = arr[0];
        arr[0] = arr[size -1 ];
        size--;
        heapify(0);
        return root;
    }

    void print(){
        for(long i =0;i<size;i++){
            cout << arr[i] << endl;
        }
    }

    long* Hsort(long * arr, long size){
        sortArr = new long(size);
        for(long i =0;i<size;i++) {
            insert(arr[i]);
        }

        for(long i = 0;i<size;i++){
            sortArr[i] = pop();
            cout << sortArr[i] << endl;
        }
        return sortArr;
    }
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_MINHEAP_H
