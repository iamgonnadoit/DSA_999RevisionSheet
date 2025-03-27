#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int NnumbersSum(int N){
	if(N == 1){
        return 1;
    }
    return N + NnumbersSum(N-1);
}

int main() {
    int n;
    cin >> n;
    
    cout << NnumbersSum(n) << " " << factorial(n);
}