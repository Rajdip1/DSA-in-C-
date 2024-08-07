#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int *arr, int s, int e, int k) {

    print(arr,s,e);

    // base case
    if(s>e) {
        return false;
    }

    int mid = s + (e-s)/2;
    cout<<"mid is "<<arr[mid]<<endl;

    if(arr[mid]==k) {
        return true;
    }

    if(arr[mid] < k) {  // k > arr[mid]
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[12] = {2,4,6,10,14,16,18,22,38,49,55,222};
    int size = 12;
    int key = 55;

    cout<<"Present or Not: "<<binarySearch(arr,0,11,key);
    
    return 0;
}