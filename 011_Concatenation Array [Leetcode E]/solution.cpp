#include<bits/stdc++.h>
using namespace std;

//Code starts 

class Solution {
  public:
      vector<int> getConcatenation(vector<int>& nums) {
          vector<int> ans(nums);
          int n = nums.size();
          ans.insert(ans.begin() + n, nums.begin(), nums.end());
  
          return ans;
      }
  };