#include<iostream>
using namespace std;

class A {
    public:
    void sayHello() {
        cout<<"Hello, it's me"<<endl;
    }
    
    void sayHello(string name) {
        cout<<"Hi..."<<name<<endl;
    }
};

class Animal {
    public:
    void speak() {
        cout<<"Speaking..."<<endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout<<"barking..."<<endl;
    }
};

int main() {
    // A a;

    // function overloading
    // a.sayHello();
    // a.sayHello("H");

    Dog d;
    // function override
    d.speak();
}