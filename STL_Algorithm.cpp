#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Uper bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max of a,b = "<<max(a,b)<<endl;
    cout<<"Min of a,b = "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a = "<<a<<endl;

    string str = "abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate: "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());  //based on 'Intro sort'
                              // mixuter of three algos, quick,heap & insertion

    cout<<"after sort: "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
}