#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   int fib(int n) {
       if (n == 0) {
           return 0;
       }
       if (n == 1) {
           return 1;
       }
       return fib(n - 1) + fib(n - 2);
       // TC = O(2^N), since it's exponential and each step induces 2 more
       // steps SC = O(N), even there are 2^N operations, at max there can be N
       // operations at once, aka recursive depth of the tree.
   }
};