// calculate sqrt using binary search algo

#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){
        long long int squar = mid*mid;

        if(squar==n){
            return mid;
        }
        if(squar<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

double morePrecision(int n, int presicisionCount, int temp){
    double factor = 1;
    double ans = temp;
    for(int i=0; i<presicisionCount; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;

    int tempSol = sqrtInteger(x);

    cout<<morePrecision(x,3,tempSol);
}