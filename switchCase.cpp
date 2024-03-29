#include<iostream>
using namespace std;

int main(){

    // char ch = '1';
    // int num = 1;

    // cout<<endl;
    // switch(ch){
    //     case 1: cout<<"first"<<endl;
    //             break;

    //     case '1': switch(num){
    //                 case 1: cout<<"value of num is "<<num<<endl;
    //                         break;
    //             }
    //             break;

    //     default: cout<<"it is default case"<<endl;
    
    // }
    // cout<<endl;


    //simple calculator
    int a,b;

    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    
    char op;
    cout<<"enter operation: ";
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;

        case '-': cout<<(a-b)<<endl;
                  break; 

        case '*': cout<<(a*b)<<endl;
                  break;

        case '/': cout<<(a/b)<<endl;
                  break;

        case '%': cout<<(a%b)<<endl;
                  break;

        default: cout<<"invalid operator"<<endl;
    }
}