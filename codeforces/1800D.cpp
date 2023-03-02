#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	int n;
	string st;
	cin >> n >> st;

	int ans = n - 1;
	for (int i = 1; i < n - 1; i++) {
		if (st[i - 1] == st[i + 1]) ans--;
	}
	cout << ans << '\n';

	// map<string, int> mp;

	// for (int i = 1; i < n; i++) {
	// 	string x = "";
	// 	x += st[i - 1];
	// 	x += st[i];

	// 	mp[x]++;
	// }

	// int ans = n - 1;
	// for (auto it : mp) {
	// 	ans -= it.second - 1;
	// 	cout << it.first << ' ' << it.second << endl;
	// }
	// cout << ans << '\n';
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