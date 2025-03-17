#include<bits/stdc++.h>
using namespace std;

// using vector hash array
int mostFrequentElement(vector<int>& nums) {
        int m = 0; // largest element
        int n = nums.size();

        for(int i=0;i<n;i++){
            m = max(m,nums[i]);
        }

        vector<int> hash(m+1,0);

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }
        int maxocc = 0;
        int num = 0;
        for (int i = 0; i <= m; i++) {
            if (hash[i] > maxocc) {
                maxocc = hash[i];
                num = i;
            } 
            else if (hash[i] == maxocc && num > i){
                num = i;
            }
        }

        return num;

        // TC = O (n + m) ~O(n) if n~=m, SC = O(m)
    }

// using unordered map aka hash map
int mostFrequentElement_map(vector<int>& nums) {
    
    unordered_map<int, int> mpp;
    int n = nums.size();
    
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    
    int maxocc = 0;
    int num;
    
    for(auto i : mpp){
        if(i.second > maxocc){
            maxocc = i.second;
            num = i.first;
        }
        else if(i.second == maxocc && num > i.first){
            num = i.first;
        }
    }
    
    return num;
}

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    while(n--){
        int i;
        cin >> i;
        nums.push_back(i);
    }
    
    cout << mostFrequentElement(nums);
}