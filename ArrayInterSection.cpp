#include<iostream>
using namespace std;

int arrInterSection(int array1[], int n, int array2[], int m) {
    // int ans;
    // for(int i=0; i<n; i++) {
    //     int element = array1[i];

    //     for(int j=0; j<m; j++) {
    //         if(element < array2[j]) {
    //             break;
    //         }
    //         if(element==array2[j]) {
    //             ans = element;
    //             array2[j] = INT32_MIN;
    //             break;
    //         }
    //     }
    // }
    // return ans;

    //Above code is logic wise fine but time complexity is O(n*m) , So
    //we need optimise solution
    //Actually this Qs is from Coding Ninja's codeStusio platform

    //two pointer approach
    int i=0, j=0;
    int ans;

    while(i<n && j<m) {                       //max of (n,m)
        if(array1[i]==array2[j]) {
            ans = array1[i];
            i++;
            j++;
        }
        else if (array1[i] < array2[j]) {
            i++;
        }
        else {
            //arr1[i] > arr2[j]
            j++;
        }
    }
    return ans;
}

int main() {
    int arr1[5] = {2,3,4,5,7};
    int arr2[4] = {3,4,5,7};

    int ans = arrInterSection(arr1,5,arr2,4);
    cout<<ans;
}