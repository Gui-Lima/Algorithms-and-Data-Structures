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
    int* arr;
    int capacity;
    int size;

public:
    minHeap(int cap){
        size = 0;
        capacity = cap;
        arr = new int[cap];
    }

    int length(){
        return size;
    }

    int root(){
        return arr[0];
    }

    int parent(int i ){
        return (i-1)/2;
    }

    int leftChild(int i){
        return i*2 + 1;
    }

    int rightChild(int i){
        return i*2 + 2;
    }

    void insert(int key){
        if(size == capacity){
            cout << "Full" << endl;
            return;
        }
        int i = size;
        arr[i] = key;
        size++;

        while(i!= 0 && arr[i] < arr[parent(i)]){
            int temp = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = temp;
            i=parent(i);
        }
    }


    void heapify(int i){
        int smallest = i;
        int l = leftChild(i);
        int r = rightChild(i);
        if(l < size && arr[l] < arr[i]){
            smallest = l;
        }
        if(r < size && arr[r] < arr[smallest]){
            smallest = r;
        }
        if(smallest != i){
            int temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
            heapify(smallest);
        }
    }

    int pop(){
        if(size <= 0){
            cout << "tem oq remover nao" << endl;
            return -1;
        }
        if(size == 1){
            size--;
            return arr[0];
        }

        int root = arr[0];
        arr[0] = arr[size -1 ];
        size--;
        heapify(0);
        return root;
    }

    void print(){
        for(int i =0;i<size;i++){
            cout << arr[i] << endl;
        }
    }
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_MINHEAP_H
