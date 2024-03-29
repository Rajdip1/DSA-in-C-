#include<iostream>
using namespace std;

void reverseArray(int num[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(num[start], num[end]);
            start++;
            end--;
    }
}

void printArray(int num[], int n){
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {23,56,34,12,76};
    int arr2[6] = {25,67,89,98,90,50};

    reverseArray(arr1,5);
    reverseArray(arr2,6);

    printArray(arr1,5);
    printArray(arr2,6);
}