#include<bits/stdc++.h>
using namespace std;

void mergeArray (int arr[],int low, int mid, int high) {
    vector<int> temp;
    //[low..mid]
    // [mid+1..high]
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= mid) {
        temp.push_back(arr[right]);
        right++;
    }
    // to add two sorted array
    for (int i=low;i<=high;i++) {
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[],int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeArray(arr,low,mid,high);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    mergeSort(arr,0,n-1);
}