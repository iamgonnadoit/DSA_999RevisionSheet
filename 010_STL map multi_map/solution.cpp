#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    // Maps are a list of key value pairs, stored in ascending value of keys
    // unordered_map also there
    // can only store unique keys
    
    // initializing
    map<int,string> mpp;
    mpp[1] = "abc";
    mpp[3] = "cat";
    mpp.insert({4,"Raj"});
    mpp[2] = "bcd";
    
    // printing
    for(auto itr : mpp){
        cout << itr.first << "->" <<itr.second << endl;
    }
    
    // find
    int x;
    cin >> x;
    auto it = mpp.find(x);  // returns the address of the pair
    
    if(it == mpp.end()){
        cout << "not found!";
    }
    else{
        cout << (*it).second <<endl; 
    }
}

void explainMultiMap(){
    // just like map but no unique keys, in ascending order of keys
    
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});
    
    // printing
    for(auto i : mpp){
        cout <<i.first<< "->" << i.second<<endl;
    }
    cout << endl;
    
    // printing only key value pair when key is 2
    auto it = mpp.equal_range(2);
    for(auto i = it.first; i != it.second; i++){
        cout << (*i).first << "->" << (*i).second << endl;
    }
    
    
}

int main() {
    
    explainMap();
    explainMultiMap();
    
}