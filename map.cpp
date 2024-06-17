#include<iostream>
#include<map>
using namespace std;

int main() {

    map<int, string> m;

    m[1] = "i";
    m[25] = "love";
    m[3] = "uh";

    m.insert({5,"Doreamon"});

    cout<<"before erase ->"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 25: "<<m.count(25)<<endl;
    cout<<"Finding 25: "<<m.count(-25)<<endl;

    cout<<"after erase ->"<<endl;
    m.erase(m.begin());
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}