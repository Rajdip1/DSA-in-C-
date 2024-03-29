#include<iostream>
using namespace std;

int binarySearch(int array[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(array[mid]==key){
            return mid;
        }
        if(key > array[mid]){  //for right side
            start = mid+1;
        }
        else{  //for left side
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int evenArray[8] = {4,6,8,13,34,56,78,88};
    int oddArray[9] = {3,5,6,8,9,45,67,68,90};

    int index = binarySearch(evenArray,8,88);
    int index1 = binarySearch(oddArray,9,67);
    
    cout<<index<<endl;
    cout<<index1<<endl;
    
}