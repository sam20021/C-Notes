#include<bits/stdc++.h>
using namespace std;

class animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking" << endl;
    }

};

class Dog : public animal{

};

int main() {
    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;
}