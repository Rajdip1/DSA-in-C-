#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    bool isPrime = 1;

    for(int i=2; i<n; i++){
        //rem = 0, Not a prime
        if(n%i==0){
            // cout<<"Not prime number"<<endl;
            isPrime = 0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"not prime number"<<endl;
    }else{
        cout<<"it is a prime number"<<endl;
    }
}