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

int lucky(int n)
{
	int mx = 0, mn = 9;
	while (n)
	{
		int x = n % 10;
		mx = max(mx, x);
		mn = min(mn, x);

		n /= 10;
	}
	return mx - mn;
}

void solve()
{
	int l, r;
	cin >> l >> r;

	if (r - l > 150) {
		l = r - 150;
	}
	int ans = 0, res = l;
	for (int i = r; i >= l; i--) {
		int x = lucky(i);
		if (x > ans) {
			ans = x;
			res = i;
		}
	}
	cout << res << '\n';
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