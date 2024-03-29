#include<iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int array[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            // swap(array[i], array[i+1]);  
            //or
            int temp = array[1];
            array[1] = array[0];
            array[0] = temp;
        }
    }
}

int main(){
    int even[8] = {2,4,6,3,8,11,33,55};
    int odd[7] = {2,4,6,3,8,11,33};

    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,7);
    printArray(odd,7);
}