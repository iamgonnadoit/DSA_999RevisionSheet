#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   vector<int> bubbleSort(vector<int>& nums) {
       int n = nums.size();
       for (int i = n - 1; i >= 0; i--) {
           // Tracks if any swaps are made.
           bool didSwap = false;
           for (int j = 0; j < i; j++) {
               if (nums[j] > nums[j + 1]) {
                   swap(nums[j], nums[j + 1]);
                   didSwap = true;
               }
           }
           if (!didSwap) {  // optimization, no need to continue id left sub
                            // array is sorted
               break;
           }
       }
       return nums;
       // TC = O(N^2) worst & avg, O(N) best case
       // SC = O(1)
   }
};
