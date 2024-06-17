#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;

    s.push("i");
    s.push("love");
    s.push("uh");

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();
    cout<<"After POP:"<<endl;
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
}