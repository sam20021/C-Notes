#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout << "Barking" << endl;
    }
};

int main() {
    Dog d1;
    d1.speak(); // output will be barking (Method Overloading) 
// If there is no method in dog class output will be Speaking
    return 0;
}