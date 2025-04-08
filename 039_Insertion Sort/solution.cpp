#include<bits/stdc++.h>
using namespace std;

// imagine left side of array as a sorted array, and keep inserting elements where they belong inside the sorted left array via multiple swaps frome right to left
class Solution {
  public:
   vector<int> insertionSort(vector<int>& nums) {
       int n = nums.size();

       for (int i = 0; i <= n - 1; i++) {
           int j = i;
           while (j > 0 && nums[j - 1] > nums[j]) {
               swap(nums[j - 1], nums[j]);
               j--;
           }
       }
       return nums;
   }
};

// TC = O(N^2) worst and avg, O(N) best if array is already sorted
// SC = O(1)
