#include<iostream>
using namespace std;

int main() {
    int num = 5;

    cout<<num<<endl;

    // address of operator -&

    cout<<"Address of operator is "<<&num<<endl;  // in Hexadecimal formate

    int *ptr = &num;       // '*' is a de-reference operator
                           // value at address pointed by 'ptr'
    cout<<ptr<<endl;
    cout<<*ptr<<endl; 

    double d = 4.3;
    double *ptr2 = &d;

    cout<<ptr2<<endl;
    cout<<*ptr2<<endl; 

    cout<<"Size of integer is: "<<sizeof(num)<<endl;

    // size of pointer is depends on architechture & compiler
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;

    cout<<"Size of double is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr2)<<endl;


    return 0;


}