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

	vector<ll> pos(1001);
	for (ll i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		pos[x] = i;
	}

	ll ans = -1;
	for (ll i = 1; i < 1001; i++) {
		if (pos[i] == 0) continue;
		for (ll j = i; j < 1001; j++) {
			if (pos[j] == 0) continue;
			ll gcd = __gcd(i, j);
			if (gcd == 1) {
				ll res = pos[i] + pos[j];
				ans = max(ans, res);
			}
		}
	}
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
