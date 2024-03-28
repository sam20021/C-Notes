#include<bits/stdc++.h>
using namespace std;

class animal {
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }

};

class Human {
    public:
    string color;

    public:
    void speak(){
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Human , public animal {

};

int main() {
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}