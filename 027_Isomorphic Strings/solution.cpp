#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
      bool isomorphicString(string s, string t) {
          if(s.size() != t.size()){
              return false;
          }
          int n = s.size();
        // sMap is characters of t that are mapped to S
          int sMap[256] = {0};
          // tMap is Characters of S, and index are the mapped t chars
          int tMap[256] = {0}; 
  
          for(int i=0;i<n;i++){
              // if chars are not mapped at all map them aka value is 0 default, add +1 so there is no confusion between 0 and not visited
              if(sMap[s[i]] == 0 && tMap[t[i]] == 0){
                  sMap[s[i]] = t[i] + 1;
                  tMap[t[i]] = s[i] + 1;
              }
              // if they are mapped but this time it's a new character not the previosly mapped char
              else if (sMap[s[i]] != t[i]+1 || tMap[t[i]] != s[i]+1){
                  return false;
              }
          }
          return true;
  
          // TC = O(n), SC = O(2 * 256)
      }
  };