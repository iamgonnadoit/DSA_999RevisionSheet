#include<bits/stdc++.h>
using namespace std;

// logic : Greatest Common divisor, basically largest number that is divides both,eg : 6,12 ans will be 6, so it is evident gcd cannot be bigger than min(n1,n2), we can start a loop from min(n1,n2) to 1 , reverse iteration will take lesser time, if we find a match that devides both we return

int GCD(int n1,int n2) {
    for(int i=min(n1,n2); i>=1;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    // TC = O(min(n1,n2)), SC = O(1)
}

// explaination in Notes
int optimalGCD(int n1, int n2) {
    
        while(n1 > 0 && n2 > 0) {
            if(n1 > n2) {
                n1 = n1 % n2;
            }
            else {
                n2 = n2 % n1;
            }
        }
      
        if(n1 == 0) return n2;
        return n1;
    // TC = O(log(min(n1,n2))), SC = O(1)
}

// going through all the multiples of the larger number () and seeing if it is divisible by both.
int LCM(int n1,int n2) {
    
    int max_num = max(n1,n2);
    int i=1;
    
    do{
        int m = max_num * i;
        if(m%n1==0 && m%n2==0){
            return m;
        }
        ++i;
    }while(1); 
    // it will eventually find lcm in n1 x n2 if nothing else
    // TC = O(n1 x n2), SC = O(1)
}

int optimalLCM(int n1, int n2){
    int gcd = optimalGCD(n1,n2);
    int lcm = (n1*n2)/gcd;
    return lcm;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    
    cout << optimalGCD(n1,n2) << " " << optimalLCM(n1,n2);
}