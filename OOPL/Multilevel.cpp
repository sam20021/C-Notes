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

class GermanSheapherd : public Dog {

};

int main() {
    GermanSheapherd g;
    g.speak();
    return 0;
}