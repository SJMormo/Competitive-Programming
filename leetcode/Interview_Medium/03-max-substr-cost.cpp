#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int> cost(27, 0);
        for (int i = 0; i < 26; i++)
            cost[i] = i + 1;
        for (int i = 0; i < chars.size(); i++)
            cost[chars[i] - 'a'] = vals[i];

        int ans = 0, mn = 0, sum = 0;
        for (auto it : s) {
            sum += cost[it - 'a'];
            mn = min(mn, sum);
            ans = max(ans, sum - mn);
        }

        return ans;
    }
};