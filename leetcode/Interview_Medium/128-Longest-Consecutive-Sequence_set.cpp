#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;
        for (auto it : s) {
            if (!s.count(it - 1)) {
                int len = 1;
                while (s.count(it + len))
                    len++;
                ans = max(ans, len);
            }
        }
        return ans;
    }
};