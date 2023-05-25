#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> unique;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int x = nums[i] + nums[j] + nums[k];
                if (x == 0) {
                    unique.insert({nums[i], nums[j], nums[k]});
                    --k;
                    ++j;
                }
                else if (x > 0) --k;
                else ++j;
            }
        }

        for (auto it : unique)
            ans.push_back(it);
        return ans;
    }
};