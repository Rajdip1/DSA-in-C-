#include<iostream>
using namespace std;

bool findDuplicates(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[i+1]) {
            return true;
        }
    }
    return false;
}

int main(){
    int dup[10] = {1,2,3,3,4,5,6,7,8,9};

    bool ans = findDuplicates(dup,10);
    cout<<bool;
}