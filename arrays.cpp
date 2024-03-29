#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[10] = {2,7};
    int size = 10;

    printArray(array,size);

    int arraySize = sizeof(array)/sizeof(int);
    cout<<arraySize<<endl;
    
}