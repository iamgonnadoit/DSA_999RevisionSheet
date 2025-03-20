#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& str) {
  // brute aproach : take first letter of first element compare with all
  // if math store in ans string, then go to second letter do same, etc...
  
  // optimal : sort the string array, what sorting does is groups the
  // similar elements together, so the first and last element will be the
  // most different ,compare only those 2, sorting also takes care of size
  // as the shortest string will come at the front

  // Edge case: empty vector
  if (str.empty()) return "";

  sort(str.begin(), str.end());
  string first = str[0];
  string last = str[str.size() - 1];
  int minLength = min(first.size(), last.size());
  string ans = "";
  for (int i = 0; i < minLength; i++) {
      // If characters don't match, return the current prefix
      if (first[i] != last[i]) {
          return ans;
      }
      // Append the matching character to the result
      ans += first[i];
  }

  return ans;
}