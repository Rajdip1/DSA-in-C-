#include<iostream>
using namespace std;

void print(int arr[], int n) {

    cout<<"Size of array is "<<n<<endl;

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int n, int k) {

    print(arr,n);

    if(n==0) {   // base case
        return false;
    }

    if(arr[0]==k) {
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, n-1, k);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 6;

    int answer = linearSearch(arr,5,6); 

    if(answer) {
        cout<<"found"<<endl;
    }
    else {
        cout<<"not found"<<endl;
    }

    return 0;
}