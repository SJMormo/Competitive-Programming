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

	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	ll ans = 0;
	for (ll i = 1; i < n; i++) {
		ll x = v[i] % 2;
		ll y = v[i - 1] % 2;

		if (x == y) ans++;
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