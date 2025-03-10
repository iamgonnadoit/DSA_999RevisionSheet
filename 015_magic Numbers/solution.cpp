#include<bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long m = 1;
    for(int i=1;i<=n;i++){
        m = m*i;
    }
    return m;
    // TC = O(n), SC = O(1)
}

bool isArmstrong(int n) {

    int num_of_digits = log10(n) + 1;
    int t = n;
    int sum = 0;
    while(t > 0){
        int last_digit = t%10;
        sum += pow(last_digit, num_of_digits);
        t = t/10;
    }
    if(sum == n) return true;
    return false;
    // TC = while loop * pow fuction = O(num_of_digits * log2(num_of_digits)), where num_of_digits = log10(n) + 1, SC = O(1)
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    cout << factorial(n) << endl;
    cout << isArmstrong(m);
}