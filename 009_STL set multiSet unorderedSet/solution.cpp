#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    // Stores only unique elements in ascending order
    
    set<int> st;
    
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(12);
    
    for(auto it : st){
        cout << it << " ";  // 2 12 21 
    }
    cout << endl;
    
    // find the iterator of any element
    auto i = st.find(12);  // return st.end() if not found
    if(i != st.end()){
        cout << *(++i); // 21 as the set is [2,12,21]
    }
    cout << endl;
    
    cout << st.count(21) << endl; // returns 1 if element present or 0
    cout << st.count(11) << endl;
    
    // erase
    st.erase (12); // makes it [2, 21]
    
    set<int> s = {1,2,3,4,5,6};
    // erasing 3,4,5 part
    
    auto a = s.begin();
    a++; a++; 
    
    auto b = s.end();
    b--; 
    
    s.erase(a,b);  // [1 2 6]
    
    // lower bound & upper bound
    set<int> s1 = {34,45,56,67,78};
    auto itr = s1.lower_bound(47);  // number >= 47 in set s1
    cout << *(itr) << endl;
    
    itr = s1.upper_bound(56);  // number > 56 in set s1
    cout << *(itr) << endl;
    
    // uppeer_bound(78) or lower_bound(79) will point to .end()
}

void explainMultiSet() {
    
    // Stores all elements in ascending order
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);
    
    for(auto it : ms){
        cout << it << " ";
    } cout << endl;
    
    //[0 1 1 1 1 2 21 21 ]
    
    cout<< ms.count(1) << endl; //4
    
    ms.erase(1); // erases all 1s --> [0 2 21 21]
    
    ms.find(21); // points to first occurence of 21
    
    ms.erase(ms.find(21)); // deletes only one 21 --> [0 2 21]
}

void explainUnorderedSet(){
    // it has lower time complexity than normal set, it stores unique elements but unordered
    
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(12);
    
    for(auto itr : st){
        cout << itr << " ";
    }
    
    auto it = st.find(2); // O(1) very rarely O(N)
}

int main() {
    
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    
}