#include<iostream>
using namespace std;

int main() {
    // int n;
    // cin>>n;

    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int*[row];

    // creation 2D Array
    for(int i=0; i<row; i++) {
        arr[i] = new int[row];
    }

    // input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i=0; i<row; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}