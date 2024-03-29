#include<iostream>
using namespace std;

int getMax(int number[],int n){ // n is size of array here
    int maximun = INT32_MIN;

    for(int i=0; i<n; i++){

        //or we can use direct funtion also
        maximun = max(maximun,number[i]);
        
        // if(number[i]>max){
        //     max = number[i];
        // }
    }
    return maximun;
}

int getMin(int number[],int n){ // n is size of array here
    int minimum = INT32_MAX;

    for(int i=0; i<n; i++){

        //or we can use direct funtion also
        minimum = min(minimum,number[i]);

        // if(number[i]<min){
        //     min = number[i];
        // }
    }
    return minimum;
}

int main(){
    int size;
    cin>>size;

    int number[100];

    for(int i=0; i<size; i++){
        cin>>number[i];
    }

    cout<<"Maximum number is "<<getMax(number,size)<<endl;
    cout<<"Minimum number is "<<getMin(number,size)<<endl;
}