#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //distructor
    ~Node() {
        int value = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int d) {

    //empty list
    if(head==NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;    
}

void insertAtTail(Node* &head, Node* &tail, int d) {
    if(tail==NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    // insert at start
    if(position==1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1) {
        temp = temp->next;
        count++;
    }

    // insert at last
    if(temp->next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    // creating node for a 'd'
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deletion(int pos, Node* &head) {

    // deleting first or start
    if(pos==1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
    }
    else {
        // deleting any middle mode
        Node* current = head;
        Node* prev = NULL;

        int count = 1;

        while(count < pos) {
            prev = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head) {
    int length = 0;

    Node* temp = head;

    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

int main() {

    Node* n1 = new Node(10);
    Node* head = n1;  // Node* head = NULL
    Node* tail = n1;  // Node* tail = NULL
    print(head);
    
    // cout<<"Length is = "<<getLength(head)<<endl;

    insertAtHead(head, tail, 11);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head, tail, 13);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head, tail, 8);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(head, tail, 25);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head, tail, 4, 20);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head, tail, 1, 30);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head, tail, 8, 50);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletion(1, head);
    print(head);

    deletion(7, head);
    print(head);

    deletion(3, head);
    print(head);

    return 0;
}