// input two numbers swap them using a pass by refernece function

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}

int main(){
    
    int a,b;
    cin >> a >> b;
    
    cout << "a = "<< a <<", b = "<<b << endl;
    swap(a,b);
    cout << "a = "<< a <<", b = "<<b << endl;   
}
