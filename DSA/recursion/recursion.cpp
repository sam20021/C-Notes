#include<bits/stdc++.h> // basic recursion 
using namespace std;
int cnt=0;
int print(){
    if(cnt==4){
        return cnt;
    } else{
        cout<<cnt<<endl;
        cnt++;
        print();
    }
}
int main(){
    print();
    return 0;
}