#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
      vector<int> selectionSort(vector<int>& nums) {
          int n = nums.size();
          for(int i=0;i<n-1;i++){
              int mini = i;
              for(int j=i;j<n;j++){
                  if(nums[j] < nums[mini]){
                      mini = j;
                  }
              }
              if(mini != i){
              swap(nums[mini], nums[i]);
              }
          }
          return nums;
      }
  };
  