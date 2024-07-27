#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    
    cout<<"Source "<<src<<" Destination "<<dest<<endl;

    if(src==dest) {
        cout<<"At home"<<endl;
        return;
    }

    // or src++;
    reachHome(src+1, dest);
}

int main() {
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
}