#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<string> q;

    q.push("imagine");
    q.push("as");
    q.push("you");
    q.push("can");

    cout<<"First element: "<<q.front()<<endl;

    q.pop();
    cout<<"After pop:"<<endl;
    cout<<"First element: "<<q.front()<<endl;

    cout<<"Size of queue: "<<q.size()<<endl;

}