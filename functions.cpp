#include<iostream>
using namespace std;

//pow(x,n)
// int power(int a,int b){
//     int ans = 1;
//     for(int i=1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main(){  

//     int a,b;
//     cin>>a>>b;

//     int ans = power(a,b);
//     cout<<ans;

//     int c,d;
//     cin>>c>>d;

//     int ans1 = power(c,d);
//     cout<<ans1;

// }


//odd or even
// void printOddEven(int n){
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }
//     else{
//         cout<<"odd"<<endl;
//     }
//     return;
// }
// bool isEvenorOdd(int n){
//     if(n&1){
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;

//     // printOddEven(n);
    
//     if(isEvenorOdd(n)){
//         cout<<"even"<<endl;
//     }
//     else{
//         cout<<"odd"<<endl;
//     }
// }


//calculate nCr
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i; 
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int numarater = factorial(n);
//     int denomnater = factorial(r)*factorial(n-r);
//     int ans = numarater/denomnater;
//     return ans;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;

//     cout<<nCr(n,r);

// }


//print counting
// void printCount(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;

//     //function call
//     printCount(n);
// }


//isPrime, whether a number is prime or not
bool isPrimeorNot(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){  //not prime number
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;

    if(isPrimeorNot(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}
