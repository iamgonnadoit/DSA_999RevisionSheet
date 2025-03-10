#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> pr1 = {2,8};
    cout << pr1.first << " " << pr1.second << endl;
    
    pair<int,char> pr2 = make_pair(2,'b');
    cout << pr2.first << " " << pr2.second << endl;
    
    pair<pair<int,char>, int> pr3 = {{4, 'h'}, 8};
    cout << pr3.first.second << endl;
    
}

void explainVector() {
    vector<int> vec;  // empty container, dynamic size unlike arrays
    vec.push_back(1); // or use .emplace_back()
    vec.push_back(2);
    vec.push_back(3);
    
    cout << vec.size() << endl;
    
    for(int i = 0; i<vec.size();i++){
        cout << vec[i] <<" ";
    }
    cout << endl;
    
    // iterator
    vector<int>::iterator beginItr = vec.begin(); // pointer or memory address to 1st element in vec
    vector<int>::iterator endItr = vec.end(); // points after last element
    
    for(vector<int>::iterator i = endItr-1; i >= beginItr; i--){
        cout << *i <<" ";
    }
    cout << endl;
    
    // for each loop using auto, here auto becomes int as vec has int
    
    for(auto itr : vec){  
        cout << itr << " ";
    }
    cout << endl;
    
    // reverse printing using iterator
    auto revBegin = vec.rbegin();   // here auto is vector<int>::iterator
    auto revEnd = vec.rend();
    
    for(auto i = revBegin; i< revEnd; i++){
        cout << *i << " ";
    }
    cout << endl;
    
    // creating vectors in different ways
    vector<int> vec2(5);  // {0,0,0,0,0}
    vector<int> vec3(3,9); // {9,9,9}
    vector<int> vec4 = {7,11,13};  // {7,11,13}
    vector<int> dupVec(vec4); // {7,11,13}
    
    // sub-vectors
    vector<int> vec5 = {1,2,3,4,5,6,7};
    vector<int> sub(vec5.begin()+2,vec5.end()-1); // {3,4,5,6}
    
    // first and last element
    cout << sub.front() << " " << sub.back() << endl; // 3 6
    
    // pop out the last element
    sub.pop_back();
    cout << sub.back() << endl; // 5
    
    // erase
    vector<int> vec6 = {1,2,3,4,5,6,7,8};
    vec6.erase(vec6.begin() + 4); // {5} deleted -> {1,2,3,4,6,7,8}
    vec6.erase(vec6.begin() + 1, vec6.end()-3); // {2,3,4} deleted -> {1 6 7 8 }
    
    vec6.clear();  // make it empty array
    
    // swap
    swap(vec5, vec6);  
    
    // insert
    vec6.insert(vec6.begin()+2, 5);  // {1 2 5 3 4 5 6 7 }
    
}

int main() {
    
    explainPair();
    
    explainVector();
    
}