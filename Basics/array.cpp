#include<iostream>
using namespace std;
int main(){
    // In Array you have to store elements of similar data type
    // We use array when we have similar datatype stored multiple times
   // int arr[5]; // This creates an array of size 5
   // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]; 
   // cout<<arr[3];



   // 2D Array
//    int arr[3][5]; // This Means that i want array of 5 3 times, 3 represent row and 5 represent column
//    arr[1][3] = 78;
//    cout<<arr[1][3];

    int arr[5];
    for(int i = 0;i<=4;i = i + 1){
        cin>>arr[i];
    }

    for(int i = 0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}