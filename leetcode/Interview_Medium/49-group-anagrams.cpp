#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        int track = 0;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (mp.find(s) == mp.end()) {
                vector<string> st;
                st.push_back(strs[i]);
                ans.push_back(st);
                mp[s] = track;
                track++;
            }
            else {
                int place = mp[s];
                ans[place].push_back(strs[i]);
            }
        }
        return ans;
    }
};