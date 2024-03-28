#include<bits/stdc++.h>
using namespace std;
int maxnum(int arr[][4],int i,int j) {
    int sum = INT_MIN;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if (arr[i][j]>sum) {
                sum = arr[i][j];
            } 
        }
    }
    return sum;
}

int main() {
    int arr[3][4];
    // taking input
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin >> arr[i][j];
        }
    }
    // taking output
    
   cout<<"Leargest element is : " << maxnum(arr,3,4);
    
    return 0;
}