#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // // cout<<"Value of n is: "<<n<<endl;

    // //if a is +ve
    // if (n>0)
    // {
    //     cout<<"N is positive"<<endl;
    // }
    // else
    // {
    //     cout<<"N is negitive"<<endl
    // }
    
    
    // int a,b;
    
    // cout<<"Enter value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter value of b: "<<endl;
    // cin>>b;

    // if (a>b)
    // {
    //     cout<<"A is greater than B"<<endl;
    // }
    // if (b>a)
    // {
    //     cout<<"B is greater than A"<<endl;
    // }

    // int a;
    // cout<<"Enter value of a: "<<endl;
    // cin>>a;

    // if(a>0){
    //     cout<<"A is positive"<<endl;
    // }
    // else{
    //     if(a<0){
    //         cout<<"A is negative"<<endl;
    //     }
    //     else{
    //         cout<<"A is zero"<<endl;
    //     }
    // }

    // if(a>0){
    //     cout<<"A is positive"<<endl;
    // }
    // else if(a<0){
    //     cout<<"A is negative"<<endl;
    // }
    // else{
    //     cout<<"A is Zero"<<endl;
    // }
    
    // int a = 2;
    // int b = a+1;

    // if((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    char ch;
    cout<<"Enter yout alphabet: "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"it is lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"it is upercase"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"it is numeric"<<endl;
    }

    
}