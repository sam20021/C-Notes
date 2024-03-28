#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1) {
        data1 = data;
        next1 = next;
    }
    node(int data1) {
        data1 = data;
        next = nullptr;
    }
};
node* convertArrtoLL(int arr[],int n) {
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1;i<n;i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main() {
    int arr[3] = {2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* head = convertArrtoLL(arr,n);
    cout << head->data << endl;
    return 0;
}