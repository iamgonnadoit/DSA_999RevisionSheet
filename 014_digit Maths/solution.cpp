#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    
    if(n == 0){
        return 1;
    }
    int count = 0;
    // count = to_string(n).length();   // Solution 2
    // count = log10(n) + 1;            // Solution 3
    
    while(n > 0){
        n = n/10;
        count++;
    }
    
    return count;
}

int countOddDigit(int n) {
    int count = 0;
    while(n > 0){
        int digit = n%10;
        if(digit %2 != 0){
            count++;
        }
        n = n/10;
    }
    return count;
}

int reverseNumber(int n) {
    int rev = 0;
    while(n > 0){
        rev = rev * 10;
        rev += n%10;
        n = n/10;
    }
    
    return rev;
}

bool isPalindrome(int n) {
    int rev = reverseNumber(n);
     return rev == n;
}

int largestDigit(int n) {
    int largest = 0;
    while(n > 0){
        int last_digit = n%10;
        largest = max(largest, last_digit);
        n = n/10;
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    cout << countDigit(n) << endl;
    cout << countOddDigit(n) << endl;
    cout << reverseNumber(n) << endl;
    cout << isPalindrome(n) << endl;
    
    // TC : log10(n) , SC : O(1) for all functions. log10(n) since all loops can run a max of number of digits in n times
}