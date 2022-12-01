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
	ll x, a, d, n;
	cin >> x >> a >> d >> n;

	if (d < 0) {
		a = a + (n - 1) * d;
		d *= -1;
	}

	ll left = 1, right = n - 1;
	while (left <= right) {
		ll mid = (left + right) / 2;
		ll val = a + d * (mid - 1);
		if (val < x) left = mid + 1;
		else right = mid - 1;
	}

	ll ans = 2e18;
	for (ll i = max(0ll, right - 5); i <= min(n - 1, right + 5); i++) {
		ll val = a + d * (i);
		val = abs(x - val);
		ans = min(ans, val);
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
