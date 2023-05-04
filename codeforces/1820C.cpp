#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int mex(std::map<int, int> mp)
{
	int mex = 0;
	for (auto it : mp) {
		// cout << it.first << ' ' << it.second << endl;
		if (it.first == mex) {
			mex++;
		}
		else break;
	}
	return mex;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	std::map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
	}


	int curr_mex = mex(mp);

	if (curr_mex == 0) {
		cout << "Yes\n";
		return;
	}

	// if curr_mex+1 exists
	if (mp.find(curr_mex + 1) != mp.end()) {
		int pos1 = -1, pos2 = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] == curr_mex + 1) {
				if (pos1 == -1) pos1 = i;
				pos2 = i;
			}
		}
		for (int i = pos1; i <= pos2; i++) v[i] = curr_mex;

		mp.clear();
		for (auto it : v) mp[it]++;

		int now = mex(mp);
		cout << (curr_mex + 1 == now ? "Yes\n" : "No\n");
	}
	else {
		for (auto it : mp) {
			if (it.second > 1 or (it.first > curr_mex and it.second > 0)) {
				cout << "Yes\n";
				return;
			}
		}
		cout << "No\n";
	}
}
int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}