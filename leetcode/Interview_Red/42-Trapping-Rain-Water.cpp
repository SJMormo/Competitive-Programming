#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxL = height[0];
        int maxR = height[n - 1];
        int l = 0, r = n - 1;
        int ans = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                if (maxL > height[l]) {
                    ans += maxL - height[l];
                }
                maxL = max(maxL, height[l]);
                ++l;
            }
            else {
                if (maxR > height[r]) {
                    ans += maxR - height[r];
                }
                maxR = max(maxR, height[r]);
                --r;
            }
        }
        return ans;
    }
};