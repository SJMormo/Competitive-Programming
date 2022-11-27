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

bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second < b.second);
}

void solve()
{
	int n;
	cin >> n;
	string st;
	cin >> st;

	int one = 0;
	vector<pair<char, int>>v;
	for (int i = 0; i < n; i++) {
		if (st[i] == '1') ++one;
		int x;
		cin >> x;
		v.push_back({st[i], x});
	}

	if (one == 0 || one == n) {
		cout << n << '\n';
		return;
	}
	sort(v.begin(), v.end(), sortbysec);
	// for (auto it : v)
	// 	cout << it.first << ' ' << it.second << endl;

	int ans = max(one, n - one), co = 0, cz = 0;
	if (v[0].first == '1') ++co;
	else ++cz;

	for (int i = 1; i < n; i++) {
		if (v[i].second != v[i - 1].second) {
			ans = max(ans, one - co + cz);
		}

		if (v[i].first == '1') ++co;
		else ++cz;
	}
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	while (t--)
		solve();

	return 0;
}
