#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"First element: "<<v.front()<<endl;

    cout<<"Last element: "<<v.back()<<endl;

    cout<<"Before POP: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After POP:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;

    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;

    vector<int> a(5,1);

    vector<int> last(a); //copying 'a' into 'v'

    cout<<"Print Last:"<<endl;
    for(int i:last){
        cout<<i<<" "<<endl;
    }cout<<endl;
}