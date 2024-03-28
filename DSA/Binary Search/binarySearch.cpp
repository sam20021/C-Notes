#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int target,int n) {   // Binary case m majority times s incremenet hoga
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;
    while(s<=e) {
        if(arr[mid] == target) {
            return mid;
        }
        // go to right
        if (target > arr[mid]) {
            s = mid + 1;
        }
        // go to left
        if (target < arr[mid]) {
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {
    int even[5] = {4,5,6,7};
    int odd[6] = {7,4,1,2,3}; 
    int n = sizeof(even[5]);
    int result = binarySearch(even,7,n);
    cout << "Index of target is: "<<result<<endl;
    return 0;
}