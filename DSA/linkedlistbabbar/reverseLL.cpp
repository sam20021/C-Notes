#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

// constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {

}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    Node* node2 = new Node(20);
    cout << node2 -> data << endl;
    return 0;
}