#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weigth;

    public:
    void speak() {
        cout<<"Barking..."<<endl;
    }
};

class Dog : public Animal {
    public:
    string color;
};

class GermanShepherd : public Dog {
};

int main() {
    // Dog d;
    // d.speak();
    GermanShepherd g;
    g.speak();
    // g.color = "Brown";
    // cout<<g.color<<endl;

    return 0;
}