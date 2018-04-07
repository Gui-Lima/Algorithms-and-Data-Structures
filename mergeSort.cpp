//
// Created by guila on 07/04/18.
//

#include "mergeSort.h"
#include "iostream"
using namespace std;
mergeSort::mergeSort(int *toBeSorted, int capacit) {
    arr = toBeSorted;
    capacity = capacit;
}

int* mergeSort::sort() {
    cout << "Hi!, I will do your mergeSort" << endl;
    int i = 0;
    int j = capacity - 1;
    return split(i , j, arr);
}

int* mergeSort::split(int initial, int final, int* arr) {
    cout << "We are spliting array : ";
    for(int i = initial;i<=final;i++){
        cout << arr[i] << " ";
    }
    cout << " Into subArrays " << endl;
    if(initial >= final) {
        return arr;
    }
    int mid = initial + (final-initial)/2;
    for(int i = initial;i<=mid;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " and " << endl;
    for(int i = mid+1;i<=final;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    split(initial, mid, arr);
    split(mid+1, final, arr);
    merge(initial, mid, final, arr);
}

int* mergeSort::merge(int initial, int median, int final, int* arr){
    //we have to make copy arrays
    cout << "Now we merge subArrays : " << endl;
    for(int i = initial;i<=median;i++){
        cout << arr[i] << " ";
    }
    cout << " and " << endl;
    for(int i = median+1;i<=final;i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;

    int n1 = median - initial + 1 ;
    int n2 = final - median;
    int left[n1];
    int right[n2];
    cout << "Auxiliary arrays : " << endl;
    for(int i = 0;i<n1;i++){
        left[i] = arr[initial + i];
        cout << left[i] << " ";
    }
    cout << endl;
    for(int i =0;i<n2;i++){
        right[i] = arr[median+1+i];
        cout << right[i] << " ";
    }
    cout << endl;

    int i =0;
    int j =0;
    int k=initial;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
    cout << " We formed array ";
    for(int i = initial;i<=final;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort::print() {
    for(int i = 0;i<capacity;i++){
        std::cout << arr[i] << std::endl;
    }
}


