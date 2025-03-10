// largest among three numbers, using Nested loops not && operators

#include <bits/stdc++.h>
using namespace std;

int main(){

int a,b,c;
cin >> a >> b >> c;
    
    if(a >= b){   
        if(a >= c){
            cout << a << " is the largest";
        }
        else{
            cout << c << " is the largest"; // if a>b but c>a c is largesst
        }
    }
    else if(b >= c){
        cout << b << " is the largest"; // if we reach here b>a already if it is >c too it is largest
    }
    else {
        cout << c << " is the largest"; // both a>c and b>c failed so c is larger than both
    }

}