#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            if(arr[i][j]==target) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    // int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,7,6,2,4,8,9,6};

    //input
    // for(int i=0; i<3; i++) {   //row wise 
    //     for(int j=0; j<4; j++) {  //column wise
    //         cin>>arr[i][j];
    //     }
    // }

    //output
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<4; j++) {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[3][4];

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search: "<<endl;
    int k;  //target element
    cin>>k;

    if(isPresent(arr,k,3,4)) {
        cout<<"Present"<<endl;
    }
    else {
        cout<<"Not present"<<endl;
    }

}