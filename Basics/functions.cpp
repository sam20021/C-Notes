#include<iostream>
using namespace std;

// Functions are a set of code which perform something for you
// Functions are used to modularise the code
// Fucntions are used to increase reliability
// Functions are used to write same code multiple time

// 4 types of functions are majourly used
// void - which do not return anything
// return
// parameterised
// non parameterized


// void printName(){
//     cout<<"Bhug jaa yaaha s";
// }



// This is void and Parametric Function
// void printName(string name) {
//     cout<<"Hey "<<name<<endl;
// }


// return function
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }



// Pass by reference is used when you dont want to use the copy of value in main function
// But ARRAYS always go by reference
void doSomething(string &s){
    s[0] = 't';
    cout<<s<<endl;
}
int main(){
    // printName();


    // string name;
    // cin>>name;
    // printName(name);
    // string name2;
    // cin>>name2;
    // printName(name2);

    // int num1,num2;
    // cin>>num1>>num2;
    // int res = sum(num1,num2);
    // cout<<res;

    string s = "Swayam";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}