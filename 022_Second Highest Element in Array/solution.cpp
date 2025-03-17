#include<bits/stdc++.h>
using namespace std;

// Approach #1 : finding 2nd highest freq by storing the previous highest freq. using hashmap
int secondMostFrequentElement_map(vector<int> &nums) {
        
        // Variable to store the size of array
        int n = nums.size();
        
        /* Variable to store maximum frequency
        and second maximum frequency */
        int maxFreq = 0, secMaxFreq = 0; 
        
        /* Variable to store element 
        with maximum frequency and second
        highest frequency */
        int maxEle = -1, secEle = -1;
        
        // HashMap
        unordered_map<int, int> mpp;
        
        // Iterating on the array
        for (int i = 0; i < n; i++) {
            // Updating hashmap 
            mpp[nums[i]]++;
        }
            
        // Iterate on the map
        for(auto it : mpp) {
            int ele = it.first; // Key
            int freq = it.second; // Value
            
            /* Update variables if new element  
            having highest frequency or second
            highest frequency is found */
            if(freq > maxFreq) {
                secMaxFreq = maxFreq;
                maxFreq = freq;
                secEle = maxEle;
                maxEle = ele;
            } 
            else if(freq == maxFreq) {
                maxEle = min(maxEle, ele);
            }
            else if(freq > secMaxFreq) {
                secMaxFreq = freq;
                secEle = ele;
            }
            else if(freq == secMaxFreq) {
                secEle = min(secEle, ele);
            }
        }
        
        // Return the result
        return secEle;
    }

// Approach #2 : finding out max freq and then finding out max freq again skipping max freq hence finding 2nd max, using hash array
int secondMostFrequentElement(vector<int>& nums) {
    
    int n = nums.size();
    
    // computing max num in nums to determine hash array size
    int max_num = 0;
    for(int i=0;i<n;i++){
        max_num = max(max_num,nums[i]);
    }
    
    vector<int> hash(max_num, 0);
    
    // initializing hash array
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    
    int max_freq = 0;
    for(int i=0;i<max_num;i++){
        max_freq = max(max_freq, hash[i]);
    }
    
    int secondmax_freq = 0;
    int ans;
    for(int i=0;i<max_num;i++){
        if(hash[i] == max_freq)  continue;
        if(hash[i] > secondmax_freq){
            secondmax_freq = hash[i];
            ans = i;
        }
        else if(hash[i] == secondmax_freq && ans > i){
            ans = i;
        }
    }
    
    return ans;  
}
