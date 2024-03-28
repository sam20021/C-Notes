#include<iostream>
using namespace std;
int main(){
    string s = "Swayam";
    // cout<<s[2];
    int len = s.size(); // Function to get the size of the string
    s[len - 1] = 'e';
    cout<<s[len - 1];
    return 0;
}
