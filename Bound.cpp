//To get first & last occurance(index) of any element in
//array

#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid]){ //right side
            start = mid+1;
        }
        else if(key<arr[mid]){  //left side
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(key>arr[mid]){ //right side
            start = mid+1;
        }
        else if(key<arr[mid]){  //left side
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int totalOccr(int n1, int n2){
    int t = (n2-n1)+1;
    return t;
}

int main(){
    int even[10] = {1,2,3,3,3,3,3,3,3,5};

    int answer = firstOccurance(even,10,6);
    cout<<"First Occurance: "<<answer<<endl;

    int answer2 = lastOccurance(even,10,6);
    cout<<"Last Occurance: "<<answer2<<endl;

    int total = totalOccr(answer,answer2);
    cout<<total;

    // int total = (answer2-answer)+1;
    // cout<<"Total no of occurance is: "<<total<<endl;

    return 0;
}