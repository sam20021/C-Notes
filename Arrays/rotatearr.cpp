#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[7] = {0,1,2,4,5,6,7};
    vector<int> s;
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    // Adding the first part
    for(int i=target;i<n;i++) {
        s.push_back(arr[i]);
    }
    //Adding second part
    for(int i=0;i<target;i++) {
        s.push_back(arr[i]);
    }
    vector<int> t(s.size() + v.size());
    vector<int>::iterator it, st;
 
    it = set_union(s.begin(), s.end(),v.begin(),v.end(), s.begin());
 
    cout << "\nAfter joining:\n";
    for (st = s.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n';
    return 0; 
}