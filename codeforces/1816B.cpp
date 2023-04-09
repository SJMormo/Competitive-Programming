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
	ll n;
	cin >> n;

	ll ans[2][n];

	ll mx = 2 * n, mn = 1ll;

	for (ll i = 0; i < n; i++) {
		if (i & 1) {
			ans[1][i - 1] = mn;
			ans[0][i] = mn + 1;
			mn += 2;
		}
		else {
			ans[0][i] = mx;
			if (i != 1)
				ans[1][i - 1] = mx - 1;
			mx -= 2;
		}
	}
	ans[1][n - 1] = (2 * n) - 1;

	for (ll i = 0; i < n; i++) cout << ans[0][i] << ' ';
	cout << '\n';
	for (ll i = 0; i < n; i++) cout << ans[1][i] << ' ';
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