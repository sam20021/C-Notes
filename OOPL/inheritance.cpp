#include<bits/stdc++.h>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class male: public Human{ // to access elements of human
    public: 
    string color;

    void sleep(){
        cout<<"Mard so rha hai" << endl;
    }
};


int main(){

    male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    
    object1.setWeight(84);
    cout << object1.weight << endl;

    cout << object1.color << endl;
    object1.sleep();
    return 0;
}