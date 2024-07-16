#include<iostream>
using namespace std;

void print_row_wise_Sum(int arr[][3],int row, int col) {

    cout<<"Printing sum: "<<endl;

    for(int row=0; row<3; row++) {

        int sum = 0;

        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout<<sum<<" "<<endl;
    }
}

void print_column_wise_Sum(int arr[][3],int row, int col) {

    cout<<"Printing sum: "<<endl;

    for(int col=0; col<3; col++) {

        int sum = 0;

        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
        cout<<endl;
    }
}

int largestRowSum(int arr[][3], int row, int col) {
    int max = INT32_MIN;
    int rowIndex  = -1;

    for(int row=0; row<3; row++) {

        int sum = 0;

        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        // cout<<sum<<" "<<endl;

        if(sum>max) {
            max = sum;
            rowIndex = row;
        }
    }

    cout<<"Larget sum is : "<<max<<endl;
    return rowIndex;
}

int largestColSum(int arr[][3], int row, int col) {
    int max = INT32_MIN;
    int colIndex  = -1;

    for(int col=0; col<3; col++) {

        int sum = 0;

        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        // cout<<sum<<" "<<endl;

        if(sum>max) {
            max = sum;
            colIndex = col;
        }
    }

    cout<<"Larget sum is : "<<max<<endl;
    return colIndex;
}

int main() {
    int arr[3][3];

    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing array: "<<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    print_row_wise_Sum(arr,3,3);
    print_column_wise_Sum(arr,3,3);

    int answerIndex = largestRowSum(arr,3,3);
    cout<<"Max is at index "<<answerIndex<<endl;

    int answerIndex2 = largestColSum(arr,3,3);
    cout<<"Max is at index "<<answerIndex2<<endl;
}