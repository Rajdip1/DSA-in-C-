#include<iostream>
using namespace std;

int getSum(int *arr, int n) {
    if(n==0) {
        return 0;
    }

    if(n==1) {
        return arr[0];
    }

    int remainingPart = getSum(arr+1, n-1);
    int sum = arr[0]+remainingPart;
    return sum;
}

int main() {
    int arr[5] = {2,4,6,8,9};
    int size = 5;

    int ans = getSum(arr,size);
    cout<<"Sum is "<<ans<<endl;

    return 0;
}