#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;  //or return end;
}

int main(){

    int array[5] = {3,8,10,17,1};
    int ans = getPivot(array,5);
    cout<<"Pivot is "<<ans<<endl;
}