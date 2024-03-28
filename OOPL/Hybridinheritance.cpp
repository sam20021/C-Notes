#include<iostream>
using namespace std;

class A {
    public:
    void func1(){
        cout << "From Class A" << endl;
    }
};

class B : public A {
    public:
    void func2(){
        cout << "From Class B" << endl;
    }
};

class D {
    public:
    void func4(){
        cout << "From Class D" << endl;
    }
};

class C : public A , public D {
    public:
    void func3(){
        cout << "From Class C" << endl;
    }
};


int main(){
    A obj1;
    obj1.func1();

    C obj3;
    obj3.func3();
    
    return 0;
}