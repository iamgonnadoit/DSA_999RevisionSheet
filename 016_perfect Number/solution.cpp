#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum == n;
    // TC = O(N), SC = O(1)
}

bool OptimalisPerfect(int n){
    // Edge case
    if(n == 1) return false;
    
    int sum = 1;
    for(int i=2;i*i <=n; i++){
        if(n%i == 0){
            sum += i;
            if(n/i != n && i != n/i){
                sum += (n/i);
            }
        }  
    }
    return sum == n;
    // TC = O(sqrt(N)), SC = O(1)
}

int main(){
    int n;
    cin >> n;
    cout << isPerfect(n);
}