//
// Created by guila on 07/04/18.
//

#include "quicksort.h"
#include "iostream"

quicksort::quicksort(int* toBeSorted, int capacit){
    arr = toBeSorted;
    capacity = capacit;
}

int* quicksort::sort() {
    int i = 0;
    int j = capacity-1;
    return qsort(i,j, arr);
}


int* quicksort::qsort(int initial, int final, int* arr){
    //temos que pegar um pivot entre esses, e ai botar tudo menor que o pivo pra um lado, tudo maior pra o outro, e chamar qsort com novos i e j, pro lado
    //esquerdo e pro lado direito
    if(initial >= final){
        return arr;
    }

    int pivot = arr[final];
    int i=initial-1;
    for(int j =initial;j<final;j++){
        if(arr[j] < pivot){
            i++;
            //swap(arr[i], arr[j]);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //swap(arr[i+1], pivot);
    int temp = pivot;
    arr[final] = arr[i+1];
    arr[i+1] = temp;
    qsort(initial, i, arr);
    qsort(i+2, final, arr);
    return arr;
}

void quicksort::print(){
    for(int i = 0;i<capacity;i++){
        std::cout << arr[i] << std::endl;
    }
}