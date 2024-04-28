#include<iostream>
#include<algorithm>
using namespace std;

int pairSum(int arr[], int n) {
    int ans;
    int s=5;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j] == s) {
                int temp;
                temp = min(arr[i],arr[j]);
                temp = max(arr[i],arr[j]);
                ans = temp;
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int ans = pairSum(arr,5);
    cout<<ans;
}