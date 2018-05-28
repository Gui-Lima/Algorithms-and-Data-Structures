//
// Created by guila on 07/04/18.
//

#include "quicksort.h"
#include "iostream"

quicksort::quicksort(long* toBeSorted, long capacit){
    arr = toBeSorted;
    capacity = capacit;
}

long* quicksort::sort() {
    long i = 0;
    long j = capacity-1;
    return qsort(i,j, arr);
}


long* quicksort::qsort(long initial, long final, long* arr){
    //temos que pegar um pivot entre esses, e ai botar tudo menor que o pivo pra um lado, tudo maior pra o outro, e chamar qsort com novos i e j, pro lado
    //esquerdo e pro lado direito
    if(initial >= final){
        return arr;
    }

    long pivot = arr[final];
    long i=initial-1;
    for(long j =initial;j<final;j++){
        if(arr[j] < pivot){
            i++;
            //swap(arr[i], arr[j]);
            long temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //swap(arr[i+1], pivot);
    long temp = pivot;
    arr[final] = arr[i+1];
    arr[i+1] = temp;
    qsort(initial, i, arr);
    qsort(i+2, final, arr);
    return arr;
}

void quicksort::print(){
    for(long i = 0;i<capacity;i++){
        std::cout << arr[i] << std::endl;
    }
}