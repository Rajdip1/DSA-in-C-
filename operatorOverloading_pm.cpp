#include<iostream>
using namespace std;

class A {
    public:
    int a,b;

    int add() {
        return a+b;
    }

    void operator+ (A &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output "<<value2-value1<<endl;
    }
};

int main() {
    A ob1, ob2;
    ob1.a = 4;
    ob2.a = 7;

    ob1+ob2;
}