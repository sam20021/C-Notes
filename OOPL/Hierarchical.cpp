#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void func1() {
        cout << "You are in function 1" << endl;
    }
};

class B : public A {
    public:
    void func2() {
        cout << "You are in function 2" << endl;
    }
};

class C : public A {
    public:
    void func3() {
        cout << "You are in function 3" << endl;
    }
};

int main(){
    
    A obj1;
    obj1.func1();
    
    B obj2;
    obj2.func2();
    obj2.func1();

    C obj3; // we will not call function2 as C is not connected to B
    obj3.func1();
    obj3.func3();

    return 0;
}
