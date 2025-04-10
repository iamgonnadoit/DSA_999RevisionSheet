#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
    // TC = O(N), SC = O(1)
}

bool optimalIsPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i <=n; i++){
        if(n%i == 0)    return false;
    }
    return true;
    // TC = O(sqrt(N)), SC = O(1)
}

int primeUptoN(int n) {
    int count = 0;
    for(int i=2;i<=n;i++){
        if(optimalIsPrime(i)){
            count++;
        }
    }
    return count;
    // TC = O(N x sqrt(N)), SC = O(1)
}

int main() {
    int n;
    cin >> n;
    
    cout << optimalIsPrime(n) << endl;
    cout << primeUptoN(n);
    
}