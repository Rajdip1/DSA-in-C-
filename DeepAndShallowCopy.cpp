#include<iostream>
using namespace std; 

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout<<"Simple constructor called"<<endl;
        
        name = new char[100];

    }

    void print() {
        cout<<"Name "<<this->name<<endl;
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

    void setName(char name[]) {
        strcpy(this->name, name);
    }
    void getName() {
        this->name = name;
    }
};

int main() {

    Hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    char name[7] = "google";
    h1.setName(name);

    h1.print();

}