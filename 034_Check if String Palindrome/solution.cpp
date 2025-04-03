#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   bool check(string& s, int l, int r) {
       if (l >= r) {
           return true;
       }
       if (s[l] != s[r]) {
           return false;
       }
       return check(s, l + 1, r - 1);
   }

   bool palindromeCheck(string& s) { return check(s, 0, s.size() - 1); }

   // TC = O(N), SC = O(N) due to N size recursive stack
};