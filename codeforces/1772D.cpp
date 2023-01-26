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
	ll n; cin >> n;

	vector<ll> v(n);
	ll mn = 0, mx = 1e9;
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	for (ll i = 0; i < n - 1; i++) {
		if (v[i] > v[i + 1]) {
			ll x = (v[i] + v[i + 1] + 1) / 2;
			mn = max(mn, x);
		}
		else if (v[i] < v[i + 1]) {
			ll x = (v[i] + v[i + 1]) / 2;
			mx = min(mx, x);
		}
	}

	if (mn > mx) cout << -1;
	else cout << mx;
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