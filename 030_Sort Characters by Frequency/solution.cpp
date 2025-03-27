#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
        static bool comparator(pair<int,char> p1, pair<int, char> p2){
            if(p1.first > p2.first) return true;
            if(p1.first < p2.first) return false;
            if(p1.second < p2.second) return true;
            if(p1.second > p2.second) return false;
        }

		vector<char> frequencySort(string& s){

            // Initialize frequency array
			pair<int, char> freq[26];
            for(int i=0;i<26;i++){
                freq[i] = {0, i+'a'};
            }

            // Count frequency of each character
            for(char ch : s){
                freq[ch - 'a'].first++;
            }

            // sort based on custom comparator
            sort(freq, freq + 26, comparator);

            vector<char> ans;
            for(int i=0;i<26;i++){
                if(freq[i].first > 0){
                    ans.push_back(freq[i].second);
                }
            }
            return ans;
		}
};