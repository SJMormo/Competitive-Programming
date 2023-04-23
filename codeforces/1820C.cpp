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
		if (it.second > 0 and it.first == mex) {
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

	// cout << curr_mex << endl;
	if (mp[curr_mex + 1] == 0) {
		int mx = *max_element(v.begin(), v.end());
		mp[mx]--;
		mp[curr_mex]++;
	}
	else {
		int x = curr_mex + 1;
		// cout << x << endl;
		int pos = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] == x) {
				pos = i;
				break;
			}
		}

		// cout << pos << endl;

		for (int i = pos; i < n; i++) {
			if (v[i] != x)
				break;
			else {
				mp[x]--;
				mp[curr_mex]++;
			}
		}
	}
	int now = mex(mp);
	if (now == curr_mex + 1) cout << "Yes\n";
	else cout << "No\n";

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