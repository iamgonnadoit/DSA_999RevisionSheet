#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   vector<char> rev(vector<char>& s, int l, int r) {
       if (l >= r) {
           return s;
       }
       swap(s[l], s[r]);
       return rev(s, l + 1, r - 1);
   }

   vector<char> reverseString(vector<char>& s) {
       int l = 0;
       int r = s.size() - 1;
       return rev(s, l, r);
   }
};