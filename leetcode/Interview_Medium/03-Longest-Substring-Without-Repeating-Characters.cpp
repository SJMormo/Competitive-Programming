#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int ans = 0, curr = 0, pos_cnt_from = 0;
		vector<int> last_pos(256, -1);
		int len = s.size();

		for (int i = 0; i < len; i++) {
			if (last_pos[s[i]] == -1) {
				last_pos[s[i]] = i;
				curr++;
			}
			else {
				pos_cnt_from = max(pos_cnt_from, last_pos[s[i]]);
				curr = i - pos_cnt_from;
				last_pos[s[i]] = i;
			}
			ans = max(ans, curr);
		}
		return ans;
	}
};