#include<iostream>
using namespace std;

class Hero {
    public:

    int health;
    char level;

    Hero() {   
        cout<<"Default constructor is called"<<endl;
    }

    //parameterised cinstructors
    Hero(int health) {
        cout<<"this -> "<<this<<endl;

        this->health = health;
    }

    Hero(int health, char level) {
        cout<<"this -> "<<this<<endl;

        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero& temp) {
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
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

    Hero s(88,'D');
    s.print();

    Hero r(s);
    r.print();

    r.health = s.health;
    r.level = s.level;


    // Hero r(10);
    // cout<<"Address of r : "<<&r<<endl;
    // r.print();

    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(25,'A');
    // temp.print();
}