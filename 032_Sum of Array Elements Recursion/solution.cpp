#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   int Summ(vector<int>& nums, int i) {  // helper function
       if (i == nums.size()) {
           return 0;
       }
       return nums[i] + Summ(nums, i + 1);
   }

   // Problem with setting an index i outside function like a while loop is for
   // multiple testcases it will retain the I value of last one, so best to
   // make it local
   int arraySum(vector<int>& nums) { return Summ(nums, 0); }
};