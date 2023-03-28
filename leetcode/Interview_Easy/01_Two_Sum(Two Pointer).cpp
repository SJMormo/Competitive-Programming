#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> position;
        for (int i = 0; i < nums.size(); i++) {
            position.push_back({nums[i], i});
        }

        sort(position.begin(), position.end());
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            int sum = position[i].first + position[j].first;
            if (sum == target) {
                // cout << "[" << i << "," << j << "]";
                return {position[i].second, position[j].second};
            }
            else if (sum > target) {
                --j;
            }
            else {
                ++i;
            }
        }
        return {};
    }
};