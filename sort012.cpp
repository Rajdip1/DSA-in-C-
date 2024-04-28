#include<iostream>
using namespace std;

//Problem is known as DNF sort Dutch National Flag algo

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" "<<endl;
    }
}

int sort012(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 2) {
            swap(arr[mid],arr[high]);
            high--;
        }
        else {
            mid++;
        }
    }
}
int main() {
    int number[5] = {0,1,1,2,0};
    sort012(number,5);
    printArr(number,5);
    
}