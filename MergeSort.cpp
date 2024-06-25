#include<iostream>
using namespace std;

void conquer(int arr[], int start, int mid, int end) {
    int mergeArr[] = new int[end-start+1];

    int idx1 = start;      //tracking first part of array
    int idx2 = mid+1;      //tracking second part of array
    int idx3 = 0;          //tracking mergeArray to place element into right place

    while(idx1 <= mid && idx2 <= end) {
        if(arr[idx1] <= arr[idx2]) {
            mergeArr[idx3] = arr[idx1];
            idx1++;
            idx3++;
        }
        else {
            mergeArr[idx3] = arr[idx2];
            idx3++;
            idx2++;
        }
    }
    while(idx1 <= mid) {
        mergeArr[idx3] = arr[idx1];
        idx1++;
        idx3++;
    }
    while(idx2 <= end) {
        mergeArr[idx3] = arr[idx2];
        idx1++;
        idx2++;
    }

    //copying merged array into original array
    for(int i=0, j=start; i<(end-start+1); i++, j++) {
        arr[j] = mergeArr[i];
    }     
}

void divide(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }
    int mid = start + (end-start)/2;
    divide(arr,start,mid);
    divide(arr,mid+1,end);
    conquer(arr,start,mid,end);
}

int main() {
    int arr[] = {4,3,11,5,6,10};
    int n = arr.size();

    divide(arr,0,n-1);

    //print array
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}