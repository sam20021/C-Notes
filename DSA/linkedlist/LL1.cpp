#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


int main() {
    int arr[4] = {2,3,4,5};
    Node* y = new Node(arr[0]); // new is used to dynamically allocate memory
    cout << y << endl;
    cout << y->data << endl;

    return 0;
}
