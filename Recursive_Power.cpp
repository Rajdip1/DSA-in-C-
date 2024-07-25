#include<iostream>
using namespace std;

int calculatePower(int n) {
    if(n==0) {
        return 1;
    }

    int power = 2 * calculatePower(n-1);
    return power;
}

int main() {
    int n;
    cin>>n;

    int ans = calculatePower(n);
    cout<<ans<<endl;

    return 0;
}