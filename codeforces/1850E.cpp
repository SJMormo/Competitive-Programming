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

void solve()
{
	ll n, c;
	cin >> n >> c;

	vector<ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	ll l = 1, r = 1e10;
	while (l <= r) {
		ll mid = l + (r - l) / 2;

		ll ans = 0;
		for (ll i = 0; i < n; i++) {
			ans += (v[i] + (2ll * mid)) * (v[i] + (2ll * mid));
			if (ans > c)
				break;
		}
		if (ans > c)
			r = mid - 1ll;
		else if (ans < c)
			l = mid + 1ll;
		else {
			cout << mid << '\n'; return;
		}
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