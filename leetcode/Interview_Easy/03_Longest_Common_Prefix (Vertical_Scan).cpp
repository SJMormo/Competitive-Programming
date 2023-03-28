#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (int i = 0; i < ans.size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != ans[i]) {
                    ans = ans.substr(0, i);
                }
            }
        }
        return ans;
    }
};