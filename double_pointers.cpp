#include<iostream>
using namespace std;

void update(int **p2) {
    // p = p+1;        no change

    // *p2 = *p2+1;   yes change

    **p2 = **p2+1;    // yes change
}

int main() {
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    /*

    cout<<"Printing P " <<p<<endl;
    // cout<<"Address of P "<<&p<<endl;
    cout<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    */

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;

    return 0;
}