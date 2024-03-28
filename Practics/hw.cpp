#include<iostream>
#include<vector>
#include<string>
using namespace std;
int binarySearch(int arr[],int target) {
    int s = 0;
    int e = 7;
    while(s < e) {
        int m = s + (e-s)/2;
        if (arr[m] == target) return m;
        
    }
}
int main()
{
    int arr[7];
    for(int i=0;i<7;i++) {
        cin >> arr[i];
    }
    int target = 34;
    return 0;
}