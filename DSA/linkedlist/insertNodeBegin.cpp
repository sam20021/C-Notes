#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1) {
        int data = data1;
        Node* next = next1;
    }

    Node(int data1) {
        int data = data1;
        Node* next = nullptr;
    }
};

int main() {
    vector<int> arr = {1,3,4,5};

    return 0;
}