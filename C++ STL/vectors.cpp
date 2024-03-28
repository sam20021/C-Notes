#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Vector is a container which is dynamic in nature meaning we can increase or dec the size
    vector<int> v;
    // to add elements in the array
    v.push_back(1);
    v.emplace_back(2); 
    vector<pair<int,int>>vec2;
    vec2.push_back({1,2});
    vec2.emplace_back(1,2); // emplace_back automatically assumes (1,2) as pair

    vector<int> v2(5,100); //this will declare a vector of {100,100,100,100,100}

    vector<int> v3(5); //this will declare vector of 5 elements with garbage value in it
    vector<int> v4(5,20);
    vector<int> v5(v4); // this will create a copy of elements in vector 5 from vector 4

// std::abs() ensures that only absolute value is held in vector no -ve values are entertained

    // Iterator - points to the memory where address is alligned and we can also access the element in  vector
    vector<int>::iterator it = v.begin() // v.begin is an iterator points to the memory and it is just the name
    it++;

    cout<<*(it)<<" "; // * means access the value at memory
    it = it + 2;
    cout<<*(it)<<" ";
  // Other Iteration
    vector<int>::iterator it = v.end(); // end points to the memory location which after the last element in vector


    cout<<v.back()<<" "; // element which is at last of the vector

   // to loop through array using iterator (Most imp)
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it) <<" ";
    }
    // shortcut for above iteration
    for(auto it = v.begin(); it !=v.end(); it++){   // auto assign data automatically for data
        cout<< *(it) <<" ";
    }
    // Another method
    for(auto it : v){
        cout<<it<<" ";
    }

    // To sort an vector
    sort(v.begin(),v.end());

    // {10,20,12,23}
    v.erase(v.begin()+1);

    // {10,20,30,40,50} to delete multiple element
    v.erase(v.begin()+2,v.begin()+4);
     // v.erase(start,end) it will remove 30 and 40 , 30 will be removed as in end we will point at element after last element
    

    // Insert Function
    vector<int>v7{2,100}; // {100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100} (poition,no of elemnts i want to insert,no i want to insert)

    // to merge two vectors
    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    // Size of the vector {10,20}
    cout<<v.size(); // {10}

    // {10,20}
    v.pop_back(); //{10}

    //v1-{10,20}
    // v2-{30,40}
    v1.swap(v2); //v1-{30,40} v2-{10,20}

    v.clear() //erases everyting

    cout<<v.empty() // tells whether vector is empty or not


    
// 2-D Vectors

    vector<vector<int>> c{{1,2,3},{4,5,6},{7,8,9}};
    // to display the vector
    for(int i=0;i<3;i++) {
        for (auto it = c[i].begin(); it != c[i].end(); it++) 
            cout << *it << " "; 
        cout << endl; 
        }
    }



    return 0;
}