#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = 1;

        int res = 0, ans = 0;

        for (auto it : mp) {
            if (mp[it.first - 1] == 1) ans++;
            else {
                res = max(ans, res);
                ans = 1;
            }
        }
        res = max(ans, res);
        return res;
    }
};