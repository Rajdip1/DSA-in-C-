#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    //distructor
    ~Node() {
        int v = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"memory free for node with data "<<v<<endl;
    }
};

void insertNode(Node* &tail, int element, int d) {

    //empty list
    if(tail==NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        //Non-empty list
        //assuming that the element is present in the list
        Node* current = tail;
        while(current->data != element) {
            current = current->next;
        }

        //element found and current representing element node
        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteNode(Node* &tail, int value) {
    //empty node
    if(tail==NULL) {
        cout<<"List is already empty"<<endl;
        return;
    }
    else {
        //non-empty
        //assuming that "value" is present in the list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node linked list
        if(curr==prev) {
            tail = NULL;
        }

        // >= 2 linked list
        else if(tail==curr) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node* tail) {  //traversing list

    Node* temp = tail;

    //empty list
    if(tail==NULL) {
        cout<<"List is empty"<<endl;
        return;
    }

    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

int main() {
    Node* tail = NULL;

    //in empty list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    // insertNode(tail, 5, 8);
    // print(tail);

    // insertNode(tail, 8, 10);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 10, 13);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}