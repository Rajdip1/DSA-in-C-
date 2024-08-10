#include<iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;
    }
};

class Male: public Human {
    public:
    string color;

    void sleep() {
        cout<<"Male sleeping"<<endl;
    }  
};

int main() {

    Male obj;
    cout<<obj.age<<endl;
    cout<<obj.weight<<endl;
    cout<<obj.weight<<endl;
    
    cout<<obj.color<<endl;
    obj.setWeight(87);
    cout<<"Weigth is "<<obj.weight<<endl;

    obj.sleep();

    return 0;
}