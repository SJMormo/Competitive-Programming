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
	int n, k;
	string st;
	cin >> n >> k >> st;

	int tmpk = k;
	vector<int> ans(n, 0);
	for (int i = 0; i < n and tmpk > 0; i++) {
		if (k & 1 and st[i] == '1')
			ans[i] = 1, tmpk--;
		else if (~k & 1 and st[i] == '0')
			ans[i] = 1, tmpk--;
	}
	ans[n - 1] += tmpk;

	for (int i = 0; i < n; i++) {
		int x = k - ans[i];
		if (x & 1)
			st[i] = '1' - (st[i] - '0');
	}

	cout << st << '\n';
	for (auto it : ans) cout << it << ' ';
	cout << '\n';
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