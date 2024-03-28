#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void sayHello(){
        cout << "Hello Swayam" << endl;
    }

    int sayHello(char name){
        cout << "Hello Swayam" << endl;
        return 1;
    }

    void sayHello(string nothing) {   // Argument inside the function should also be different
        cout << "Hello" << nothing << endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    return 0;
}