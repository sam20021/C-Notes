#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {32,45,56,54};
    int sum = 0;
    int maxi = INT_MIN;
    int n = sizeof(arr);
    for(auto it: arr){
        sum+=it;
        maxi = max(sum,maxi);
        if (sum<0){
            sum=0;
        } 
        return maxi;
    }
    return 0;
}