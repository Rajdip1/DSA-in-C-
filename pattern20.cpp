#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){

        //spaces
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //second triangle
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }

        //third triangle
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row=row+1;
    }
}