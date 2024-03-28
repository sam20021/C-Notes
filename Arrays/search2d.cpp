#include<bits/stdc++.h>
using namespace std;

int ispresent(int arr[][4],int target,int i,int j) {
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

int rowsum(int arr[3][4],int i,int j) {
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        cout <<sum<<" ";
    }
    return sum;
}

int largestRowSum(int arr[3][4],int i,int j){
    int maxi =INT_MIN;
    int rowIndex = -1;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
        cout <<"The maximum sum is: "<<maxi<<endl;
        return rowIndex;
    }
}

int main() {
    int arr[3][4];
    // take input (rowwise)
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j]<<endl;
        }
        cout<<endl;
    }

    // cout << "Enter the element to search" << endl;
    // int target;
    // cin >> target;

    // if(ispresent(arr,target,3,4)) {
    //     cout << "Mil gaya"<<endl;
    // } else {
    //     cout << "Nhi Milaa" << endl;
    // }
   // return rowsum(arr,3,4);

   return largestRowSum(arr,3,4);
}