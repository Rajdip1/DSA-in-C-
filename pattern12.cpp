#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char start = 'A';
    while(row<=n){

        int col=1;
        while(col<=n){
            int value = start+col-1;
            cout<<start<<" ";
            start = start+1;
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}