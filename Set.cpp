#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout<<"After erase:"<<endl;
    for(int i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(6)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"Value present at itr: "<<*it<<endl;

    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<endl;
    }
}