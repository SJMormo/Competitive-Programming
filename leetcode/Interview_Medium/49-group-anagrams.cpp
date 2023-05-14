#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        int track = 0;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            string key = getKey(strs[i]);
            if (mp.find(key) == mp.end()) {
                vector<string> st;
                st.push_back(strs[i]);
                ans.push_back(st);
                mp[key] = track;
                track++;
            }
            else
                ans[mp[key]].push_back(strs[i]);
        }
        return ans;
    }

private:
    string getKey(string s) {
        vector<int> cnt(26, 0);
        for (int i = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
        }
        string res = "";
        for (int i = 0; i < 26; i++) {
            char a = cnt[i] + '0';
            res += a;
        }
        return res;
    }
};