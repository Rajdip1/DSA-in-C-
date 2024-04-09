#include<iostream>
using namespace std;

int peakIndexOfMountainArray(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int array[5] = {2,1,3,4,2};

    int ans = peakIndexOfMountainArray(array,5);
    cout<<"Peak index of mountain is: "<<ans<<endl;
}