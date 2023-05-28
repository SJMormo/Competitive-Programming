#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, mn = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                mn = min(prices[i - 1], mn);
            }
            ans = max(ans, prices[i] - mn);
            cout << ans << endl;
        }
        return ans;
    }
};