#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int> cnt(10, 0);
        for (auto it : nums1)
            cnt[it]++;
        for (auto it : nums2)
            cnt[it]++;

        for (int i = 1; i <= 9; i++) {
            if (cnt[i] > 1) {
                return i;
            }
        }

        int one = *min_element(nums1.begin(), nums1.end());
        int two = *min_element(nums2.begin(), nums2.end());

        int ans = 0;
        if (one < two)
            ans = one * 10 + two;
        else
            ans = two * 10 + one;

        return ans;
    }
};