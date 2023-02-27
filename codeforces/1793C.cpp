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
	cin >> n;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];

	int lower = 0, upper = 0, l = 1, r = n, prev_l = 1, prev_r = n;
	while (l <= r) {
		if (v[l] == n - upper) l++, upper++;
		else if (v[l] == 1 + lower) l++, lower++;

		if (v[r] == n - upper) r--, upper++;
		else if (v[r] == 1 + lower) r--, lower++;

		if (prev_l == l && prev_r == r) {
			cout << l << ' ' << r << '\n';
			return;
		}

		prev_l = l, prev_r = r;
	}

	cout << -1 << '\n';
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