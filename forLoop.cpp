#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter valuew of n: ";
    // cin>>n;

    cout<<"Printing count from 1 tp n: "<<endl;

    // for(int i=1; i<=n; i++){
    //     cout<<i<<" ";
    // }

    for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }

}