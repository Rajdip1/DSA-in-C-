#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0 || n==1) {  //base case
        return 1;
    }

    int fact = n * factorial(n-1);
    return fact;
}

int main() {
    int number;
    cin>>number;

    int ans = factorial(number);
    cout<<ans<<endl;

    return 0;
}