// O(nlogn)
// because max heap takes logn to build one element heap!

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
        priority_queue<pair<int, int>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};