#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
    int left = 0, right = n-1;
    while(left < right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
// TC = O(n/2) or O(n), SC = O(1)
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    reverse(arr,n);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}