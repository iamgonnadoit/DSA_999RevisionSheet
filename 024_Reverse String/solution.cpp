#include<bits/stdc++.h>
using namespace std;

void reverseString(string& s){
	int left = 0;
    int right = s.size()-1;
    
    while(left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    // TC = O(N/2), SC = O(1)
}

int main(){
    string s = "car";
    s += "sex";  // less time complexity than s = s + "sex"
    cout << s << endl;
    
    int n = s.size();
    // printing letters one by one in each line
    for(int i=0;i<n;i++){
        cout <<s[i]<<endl;
    }
    
    //substring, starting index and length of sub-string, print "ars"
    s = s.substr(1,3);
    cout << s << endl;
    
    reverseString(s);
    cout << s;
}