#include<bits/stdc++.h>
using namespace std;
int main(){
    // Hashing is a process which involves prestoring and fetching 
    // it can be used to find a number where a large number of data are present

    //here we take input regarding how large will our array will be
    int n;
    cin>>n;
    int arr[n];
    // here we take input for our array
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    //Precomputation
    // this process involves creating an hash array of size 13 with o elements in it
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    // this can be used to find how much queries we want to take 
    int q;
    cin>>q;
    // loop can be used to run our queries
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout<<hash[number] << endl;

    }
    return 0;

}