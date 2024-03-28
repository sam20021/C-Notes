#include<iostream>
using namespace std;

class A {
    public:
    void func(){
        cout << "From Class A" << endl;
    }
};

class B {
    public:
    void func(){
        cout << "From Class B" << endl;
    }
};

class C : public A , public B {


};

int main(){
    C obj;
    obj.A::func();
    obj.B::func();

    return 0;
}