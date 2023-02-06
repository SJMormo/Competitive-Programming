class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string ans = strs[0];
		for (int i = 1; i < strs.size(); i++) {
			if (strs[i].size() == 0) { // watch for these cases!
				ans = "";
				break;
			}
			for (int j = 0; j < strs[i].size(); j++) {
				if (ans[j] != strs[i][j]) {
					ans = strs[i].substr(0, j);
					// cout << ans;
					break;
				}
				else if (j == strs[i].size() - 1) {
					ans = strs[i].substr(0, j + 1);
				}
			}
		}
		return ans;
	}
};