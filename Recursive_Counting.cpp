#include<iostream>
using namespace std;

void printCounting(int n) {
    if(n==0) {
        return;
    }

    printCounting(n-1);   // head recursive

    cout<<n<<" ";

    // printCounting(n-1);      // tell recursive
}

int main() {
    int n;
    cin>>n;

    printCounting(n);

    return 0;
}