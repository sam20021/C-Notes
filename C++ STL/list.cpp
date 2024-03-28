#include<iostream>
#include<list>
#include<deque>
using namespace std;
void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4}

    ls.emplace_front(); //{2,4}
    //rest function same as vector
    // begin, end, rbegin,rend,clear,insert,size,swap

}





void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();
    //rest function same as vector
    // begin, end, rbegin,rend,clear,insert,size,swap
}



void explainStack(){     //LIFO- last-in-first-out  , there are no indexing and all HAVE tc-O(1)
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.push(5); //{5,3,3,2,1}

    cout<<st.top(); //prints 5 "** st[2] is invalid"

    st.pop(); // st looks like {3,3,2,1} 

    cout<<st.top(); // 3
    cout<<st.size(); //4  as there are still 4 elements in the stack
    cout<<st.empty(); //false

    stack<int>st1,st2;
    st1.swap(st2);
}

void explainQueue() {
    // FIFO - First in First Out
    queue<int> q;
    q.push(1);  //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5; //{1,2,9}

    cout<<q.back(); // prints 9

    cout<<q.front(); //prints 1

    q.pop(); //{2,9}

    cout<<q.front(); //prints2
    // All operations are similar to stack
}


void explainPQ(){
    // THE LARGEST ELEMENT WILL STAY AT TOP and it is not a linear DS and Tree is mantained inside it
    //This is Maximum Heap
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top(); //prints 10 as it is the largest element and will stay at top of queue

    pq.pop(); //{8,5,2}

    cout<<pq.top(); // prints 8

    // size swap function same as other
    // Minimum Heap
    // to store min element in top
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{8,2,5}
    pq.emplace(10); //{2,5,8,10}
    
    cout<<pq.top(); //prints 2


    //TC of PUSH-logn , TC OF TOP-O(1) , TC POP-log(n)

    void explainSet(){
        // Set Data Structure stores everything in Sorted and Unique Manner , it sotres Data in the form of Trees
        set<int>st;
        st.insert(1); //{1}
        st.emplace(2); //{1,2}
        st.insert(2); //{1,2}
        st.insert(4); //{1,2,4}
        st.insert(3); //{1,2,3,4}

        // Functionality of insert in vector
        // can be used also, that only increase
        //efficiency

        //begin(),end(),rbegin(),rend(),size()
        //empty() and swap() are same as those of above

        //{1,2,3,4,5}
        auto it = st.find(3); // it will return the iterator which points to 3

        auto it = st.find(6); // will print st.end()

        st.erase(5); // erase 5 and take log time

        int cnt = st.count(1); //it will return 1 occurance and if element is not present it will retirn 0

        auto it = st.find(3);
        st.erase(it1, it2); // after erase{1,4,5} {first,last}

        // lower_bound() and upper_bound() functions works in the same way , go watch another video
        // as in vector it does

        //This is syntax 
        auto it  = st.lower_bound(2);

        auto it = st.upper_bound(3);
    }


    void explainMultiSet() {
        // Everything is same as set
        // only stores duplicate element also meaning it only follows sorted

        multiset<int>ms;
        ms.insert(1); // {1}
        ms.insert(1); // {1,1}
        ms.insert(1); // {1,1,1}

        ms.erase(1); // all 1s are erased

        int cnt = ms.count(1);

        // only a single 1 is erased
        ms.erase(ms.find(1));

        ms.erase(ms.find(1),ms.find(1)+2);

        // rest all functions same as set
    }

    void explainUSet() {
        unordered set<int> st;
        // in this case all elements should be unique and not sorted
        // lower_bound and upper_bound function
        //does not works, rest all the functions are same
        // as above, it does not store in any 
        // particular order it has a better compliexity
        // than set in most cases, except when collision occurs
        // TC-  O(1) worstcase - O(n)
    }

    void explainMap() {

        map<int, int> mpp; // 1int - key and other is value
        map<int, pair<int,int>> mpp;
        map pair<<int,int>, int> mpp;

        mpp[1] =2;
        mpp.emplace({3, 1});
        mpp.insert({2,4});

        mpp[{2,3}] = 10; //{2,3} = key and value is 10
        // the above 3 lines are stored in this manner = {{1,2}{2,4}{3,1}} and everything is stored in sorted order
        for(auto it : mpp){
            cout<< it.first <<" " << it.second << endl;
        }

        cout<<mpp[1]; // Output is 2 
        cout<<mpp[5]; // NULL OUTPUT

        // to find the iterator of the element
        auto it = mpp.find(3);
        cout<<*(it).second;

        auto it = mpp.find(5); // it will return 0

        // This is the syntax
        auto it = mpp.lower_bound(2);

        auto it = mpp.upper_bound(3);

        // erase , swap, size, empty, are same as above
    }
void explainMultiMap(){
    // you can store duplicate keys over here 
    // only mpp[key] cannot be stored here
    // rest everything is same as maps
}

void explainUnorderedMap(){
    // same as set and unordered_Set Diiference
    // it will not store in sorted and have unique keys
    // O(1) - Normal case O(N) - Worst Case
}

bool comp(pair<int, int> p1,pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;  // in comparator always take in forms of list not array
}
void explainExtra(){

    sort(a, a+ n);
    sort(v.begin(), v.end());

    sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1,2},{2,1},{4,1}};
   // Q-
    // sort it according to second element
    // if second element is same then sort
    // it according to first element but in descending

    sort(a, a+n, comp); //comp is self written comparator and it is a bool function


    int num = 7;
    int cnt = _builtin_popcount();

    long long num = 243543253636;
    int cnt = _builtin_popcountll();

    string s = "123";
    sort(s.begin(),s.end());

    do {
        cout<<s<<endl;
    } while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);  //
}


}
int main(){
    return 0;
}