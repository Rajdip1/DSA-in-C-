#include<iostream>
using namespace std;

int score = 15;  // global

void a(int& i) {
    cout<<score<<endl;
    score++;

    cout<<i<<endl;
    // b(i);
}
 
void b(int& i) {
    cout<<i<<endl;
    cout<<score<<endl;
} 

int main() {

    int i = 5;  // local

    a(i);
    b(i);

    cout<<score<<endl;

    return 0;
}