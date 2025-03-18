#include<bits/stdc++.h>
using namespace std;

int sumHighestAndLowestFrequency(vector<int>& nums) {
  vector<int> hash(10001, 0);
  int n = nums.size();

  for (int i = 0; i < n; i++) {
      hash[nums[i]]++;
  }

  int maxfreq = INT_MIN, minfreq = INT_MAX;
  for (int i = 0; i <= 10000; i++) {
      maxfreq = max(maxfreq, hash[i]);
      if (hash[i] != 0) {
          minfreq = min(minfreq, hash[i]);
      }
  }

  return (maxfreq + minfreq);

  // TC = O(n), SC = O(10k)
}