#include<bits/stdc++.h>
using namespace std;

bool brute_anagramStrings(string& s,string t){
	sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s == t;
    // TC = Nlog(N) for sorting, SC = O(1)
}

// Optimal Approach : in anagrams the frequency of all elements among anagrams should be the same, so we will store frequencies of S in an hash array and decrement the frequencies if found in t, in case they are indeed anagrams at the end of all that the array should only have '0' as elements. we can also create two hash arrays and compare but this way we optimize space complexity

bool anagramStrings(string& s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    int n = s.size();
    int hash[256] = {0};
    for (int i = 0; i < n; i++) {
        hash[s[i]]++;
        hash[t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (hash[i] != 0) return false;
    }
    return true;
    // TC = O(N), SC = O(1)
}