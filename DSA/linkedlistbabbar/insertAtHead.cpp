#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node() {
        int value = this -> data;
        // memory free
        if (this->next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node* &head,int d) {
    // new node create
    Node* temp = new Node(d);
    temp -> next = head; 
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &head,int position,int data) {
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp ->next;
        cnt++;
    }

    // creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {

    // deleting first or last node
    if (position == 1) {
        Node* temp = head;
        head = head -> next;
        // memory free space
        temp -> next = NULL;
        delete temp;
    }
    else {
        // deleting middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main() {
    // created new node
    Node* node1 = new Node(10);
   // cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    // head pointed to new node
    Node* head = node1;
    cout << head -> data << endl;
    
    insertAtHead(head,20);
    cout << head -> data << endl;
    insertAtPosition(head,3,20);
    cout << head->data;

    deleteNode(3,head);
    cout << head << endl;
    return 0;
}