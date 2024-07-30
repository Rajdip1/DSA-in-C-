#include<iostream>
using namespace std;

int partitioning(int *arr, int s, int e) {
    int pivot = arr[s];

    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //taking care of left and right part
    int i=s, j=e;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            //swap
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    //partitioning 
    int p = partitioning(arr, s, e);

    //left part sort
    quickSort(arr, s, p-1);

    //right part sort
    quickSort(arr, p+1, e);

}

int main() {
    int arr[5] = {3,1,4,5,2};
    int n = 5;

    quickSort(arr, 0, n-1);

    //print
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}