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
	ll n, c;
	cin >> n >> c;

	vector<ll> v;
	vector<pair<ll, ll>> vp;

	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;

		vp.push_back({x, i + 1});
		v.push_back(x + i + 1);
	}

	sort(vp.begin(), vp.end());
	sort(v.begin(), v.end());

	ll ans = 0;
	for (auto it : v) {
		// cout << it << endl;
		c -= it;
		if (c >= 0) ans++;
	}

	cout << ans << '\n';

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