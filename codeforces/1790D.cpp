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

	std::map<ll, ll> mp;

	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		mp[x]++;
	}

	ll ans = 0, last = 0;

	for (auto it : mp) {
		ll x = it.first;
		if (mp[x - 1] == 0)
			last = 0;
		ans += max(0ll, it.second - last);
		last = it.second;
		// cout << ans << ' ' << last << '\n';
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