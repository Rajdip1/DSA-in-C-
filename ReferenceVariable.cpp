#include<iostream>
using namespace std;

void update1(int& n) {
    n++;
}

void update(int n) {
    n++;
}

int main() {
    /*
    int i = 5;

    //create a reference variable
    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

    int n = 5;

    cout<<"before "<<n<<endl;
    update1(n);
    cout<<"after "<<n<<endl;
    
}