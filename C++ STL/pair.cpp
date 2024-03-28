#include<bits/stdc++.h> // c++ stl is divided in 4 parts - Algo,Containers,Functions,Iterators
using namespace std;
int main(){
    // Pair is a utility library
    pair<int,int> p = {1,3}; // using pair we can store 2 variables in a single p variable 
    // to access first pair
    cout<<p.first<<p.second;


    // to store multiple variable use nested property of pair
    pair<int,pair<int,int>> p2 ={1,{3,4}}; 
    cout<<p.first<<" "<<p2.second.second<<" "<<p2.second.first;
   
        
    // we can also declare array as pairs
    pair<int,int> arr[]={{1,2}, {2,5}, {5,1}};
    cout<< arr[1].second;
    return 0;
}