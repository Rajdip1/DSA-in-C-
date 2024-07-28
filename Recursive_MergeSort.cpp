#include<iostream>
using namespace std;

void merge(int *arr, int start, int end) {

    int mid = start + (end-start)/2;

    int length1 = (mid-start)+1;
    int length2 = end-mid;

    int *first = new int[length1];   //sub array1
    int *second = new int[length2];  //sub array2

    //copy values
    int mainArrayIndex = start;
    for(int i=0; i<length1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<length2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < length1 && index2 < length2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < length1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < length2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[]first;
    delete[]second;
}

void mergeSort(int *arr, int start, int end) {
    // base case
    if(start >= end) {
        return;
    }

    int mid = start + (end-start)/2;

    //left part sort
    mergeSort(arr,start,mid);

    //right part sort
    mergeSort(arr, mid+1, end);

    //merge
    merge(arr, start, end);
}

int main() {
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}