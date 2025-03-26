#include <bits/stdc++.h>
using namespace std;

bool brute_rotateString(string& s,string& goal){
	//approach : there are n-1 shifts possible, so we will go through all of em and match with goal
    
    int n = s.size();
    for (int i = 0; i < n; i++) {
        string left = s.substr(i);
        string right = s.substr(0, i);
        if (left + right == goal) {
            return true;
        }
    }
    return false;
    // TC = O(N loop * N to find substr) = O(N^2), SC = O(2N)
}

// optimal approach : add string to itself, abc -> abcabc, now you can find substrings like abc,bca,cab and match goal
// find() returns a size_t which represents the index (starting from 0) where the substring or character is first found. If it's not found, it returns std::string::npos
bool rotateString(string& s, string& goal) {
    if (s.length() != goal.length()) {
        return false;  
    }
    string doubledS = s + s;  // Concatenate s with itself
    return doubledS.find(goal) != string::npos;  // Check if goal is a substring of s + s
    
    // TC = O(N) find takes, SC = O(N)
}