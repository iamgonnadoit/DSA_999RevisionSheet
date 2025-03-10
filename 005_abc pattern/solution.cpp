/*

say for N = 5, the pattern should look like as below:

E 
D E 
C D E 
B C D E 
A B C D E

*/

#include <bits/stdc++.h>
using namespace std;

void pattern18 (int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << (char)(65+n-i+j-1)<<" ";
        }
        cout << endl;
    }
}

int main(){
    
    int n;
    cin >> n;
    
    pattern18(n);
    
}