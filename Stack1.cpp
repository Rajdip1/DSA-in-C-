#include<iostream>
using namespace std;

class Stack {
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size-top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout<<"stack overflow"<<endl;
        }
    }

    void pop() {
        if(top >= 1) {
            top--;
        }
        else {
            cout<<"stack underflow"<<endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Stack s(5);

    s.push(22);
    s.push(25);
    s.push(35);
    s.push(45);
    s.push(55);
    s.push(65);

    cout<<s.peek()<<endl;

    s.pop();

    cout<<s.peek()<<endl;

    s.pop();

    cout<<s.peek()<<endl;
    
    if(s.isEmpty()) {
        cout<<"stack is empty"<<endl;
    }
    else {
        cout<<"stack is not empty"<<endl;
    }
}