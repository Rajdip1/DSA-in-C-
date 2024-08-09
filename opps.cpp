#include<iostream>
using namespace std;

class Hero {

    //properties
    /*
    char name[100];
    int health;
    char level;
    */
    private:
    int health;

    public:
    char level;

    void print() {
        cout<<level<<endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {

    //creation of object
    // Hero raj;

    // cout<<"Size of Raj : "<<sizeof(raj)<<endl;

    // raj.health = 80;
    // raj.setHealth(80);
    // raj.level = 'A';

    // cout<<"Raj health is : "<<raj.getHealth()<<endl;

    // cout<<"Health is : "<<raj.health<<endl;
    // cout<<"Level is : "<<raj.level<<endl;

    // cout<<"size : "<<sizeof(h1)<<endl;

    //static allocation
    Hero a;
    a.setHealth(90);
    a.setLevel('A');
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;

    //Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(87);
    b->setLevel('B');
    cout<<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

    cout<<"Level is "<<b -> level<<endl;
    cout<<"Health is "<<b -> getHealth()<<endl;

    return 0;
}