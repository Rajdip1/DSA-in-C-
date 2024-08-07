#include<iostream>
using namespace std;

void print(int *p) {
    cout<<*p<<endl;
}

void update(int *p) {
    // p = p+1;
    // cout<<"Inside "<<p<<endl;

    *p = *p + 1;  // value update
}

int getSum(int arr[], int n) {  //int *arr

    cout<<"Size : "<<sizeof(arr)<<endl;

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];   // or i[arr]
    }
    return sum;
}

int main() {

    /*
    int value = 5;
    int *p = &value;

    print(p);

    cout<<"Before "<<p<<endl;
    update(p);
    cout<<"After "<<p<<endl;

    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;
    */
    
    int arr[6] = {1,2,3,4,5,9};
    cout<<"Sum is "<<getSum(arr+3, 3)<<endl;

    return 0;
}