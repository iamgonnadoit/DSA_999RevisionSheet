#include<bits/stdc++.h>
using namespace std;

class Solution {
  bool check(int num, int i) {
      if (i == 1) {
          return true;
      }
      if (num % i == 0) {
          return false;
      }
      return check(num, i - 1);
      // TC = O(sqrt N), SC = O(sqrt N)
  }

 public:
  bool checkPrime(int num) {
      if (num <= 1) {
          return false;  // 0 & 1 are not prime
      }
      return check(num, sqrt(num));
  }
};