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
	ll n, k, x, ans = 0;
	cin >> n >> k >> x;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		ans += v[i];
	}

	ll m = 0;
	for (ll i = 0; i < n; i++) {
		m += v[i] / x;
	}

	m = min(m, k);
	ans -= m * x;
	k -= m;

	for (ll i = 0 ; i < n; i++)
		v[i] %= x;

	sort(v.rbegin(), v.rend());
	for (ll i = 0; i < n; i++) {
		if (k == 0) break;
		ans -= v[i];
		k--;
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
