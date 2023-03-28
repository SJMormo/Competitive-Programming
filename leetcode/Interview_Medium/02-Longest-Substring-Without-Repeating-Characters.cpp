#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int ans = 0, curr = 0, pos_cnt_from = 0;
		unordered_map<char, int> last_pos;

		for (int i = 0; i < s.size(); i++) {
			if (last_pos.find(s[i]) == last_pos.end()) {
				last_pos[s[i]] = i;
				curr++;
			}
			else {
				pos_cnt_from = max(pos_cnt_from, last_pos[s[i]]);
				curr = i - pos_cnt_from;
				last_pos[s[i]] = i;
			}
			ans = max(ans, curr);
			cout << pos_cnt_from << ' ' << curr << ' ' << ans << endl;
		}

		return ans;
	}
};