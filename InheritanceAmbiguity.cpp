#include<iostream>
using namespace std;

class A {
    public:
    void fun() {
        cout<<"I'm function 1"<<endl;
    }
};

class B {
    public:
    void fun() {
        cout<<"I'm function 2"<<endl;
    }
};

class C : public A, public B {
};

int main() {
    C c1;
    // c1.fun();
    c1.A::fun();
    c1.B::fun();
}