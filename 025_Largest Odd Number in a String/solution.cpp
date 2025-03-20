#include<bits/stdc++.h>
using namespace std;

// observation for a number to be odd the last digit of the number should also be odd, so we we do a backward traversal until we find and odd num, then take the substring from start till that number
string largeOddNum(string& s) {
    int n = s.size();
    int l=0, r;
    for (int i = n - 1; i >= 0; i--) {
        int digit = s[i] - '0';
        if (digit % 2 != 0) {
            r = i;
            break;
        }
    }
    
    // finding the first non zero digit in the string
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            l = i;
            break;
        }
    }

    return s.substr(l,r-l + 1);;
    // TC = O(N), SC = O(1)
}

int main(){
    string num;
    cin >> num;
    
    cout << largeOddNum(num);
}