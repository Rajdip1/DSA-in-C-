#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weigth;

    void bark() {
        cout<<"Dog is barking..."<<endl;
    }
};

class Human {
    public:
    string color;

    void speak() {
        cout<<"Human is speaking..."<<endl;
    }
};

// multiple inheritance
class Hybrid : public Animal, public Human {
};

int main() {
    Hybrid h1;
    h1.bark();
    h1.speak();
    return 0;
}