#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    vector<int> v;
    for(int i=1;i*i <= n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    
    return v;
    // TC = loops that runs sqrt n time + time to sort 
    //    = O(sqrt(N)) + O(K*Log(K)), where k is the number of divisors in v
}

int main(){
    int n;
    cin >> n;
    vector<int> v = divisors(n);
    
    for(auto i : v){
        cout << i << " ";
    }
}