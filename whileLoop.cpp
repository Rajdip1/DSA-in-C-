#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        // cout<<i<<" ";

        // for print sum of all numbers upto 5
        sum = sum+i;
        i = i+1;
    }
    cout<<sum;
}