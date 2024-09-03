#include<iostream>
#include<stack>
using namespace std;

int main() {
    //creation of stack
    stack<int> s;

    s.push(2);
    s.push(5);

    s.pop();

    cout<<"Print top element "<<s.top()<<endl;

    cout<<"stack size is "<<s.size()<<endl;

    if(s.empty()) {
        cout<<"stack is empty"<<endl;
    }
    else {
        cout<<"stack is not empty"<<endl;
    }
}