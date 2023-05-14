// O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto it : nums) {
            mp[it]++;
        }
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for (auto it : mp) {
            bucket[it.second].push_back(it.first);
        }
        for (int i = n; i >= 0; i--) {
            if (k == 0)
                break;
            if (!bucket[i].empty()) {
                for (int j = 0; j < bucket[i].size(); j++) {
                    ans.push_back(bucket[i][j]);
                    k--;
                    if (k == 0)
                        break;
                }
            }
        }
        return ans;
    }
};