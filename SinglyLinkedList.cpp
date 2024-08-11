#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // distructor
    ~Node() {
        int value = this->data;
        // memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d)  {
    
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head) {
    Node* temp = head;
    
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    // insert at start
    if(position==1) {
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1) {
        temp = temp->next;
        count++;
    }

    // insert at last
    if(temp->next==NULL) {
        insertAtTail(tail,d);
        return;
    }

    // createting node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    // deleting at first or start node
    if(position==1) {
        Node* temp = head;
        head = head->next;
        // memory free of start node
        temp->next = NULL;
        delete temp;
    }
    else {
        // deleting middle or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;

        while(count < position) {
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main() {

    // created a new node
    Node* node1 = new Node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // insertAtHead(head,12);
    // print(head);

    // insertAtHead(head,15);
    // print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,22);
    print(head);

    insertAtPosition(head,tail,4,25);
    print(head);

    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;

    deleteNode(4,head);
    print(head);

    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;

    return 0;
}