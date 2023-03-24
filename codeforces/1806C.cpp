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

ll dist(vector<ll> a, vector<ll> b)
{
	ll ans = 0;
	for (ll i = 0; i < a.size(); i++)
		ans += abs(a[i] - b[i]);
	return ans;
}

void solve()
{
	ll m;
	cin >> m;
	ll n = (m << 1);

	vector<ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	// common case
	vector<ll> cmp(n, 0);
	ll ans = dist(cmp, v);

	if (m == 1) {
		ans = min(ans, abs(v[1] - v[0]));
	}
	if (m == 2) {
		for (ll i = 0; i < n; i++)
			cmp[i] = 2;

		ans = min(ans, dist(cmp, v));
	}

	// -1 case
	if (n % 4 == 0) {
		for (ll i = 0; i < n; i++)
			cmp[i] = -1;
		if (m & 1)
			*cmp.rbegin() = -m;
		else
			*cmp.rbegin() = m;

		ans = min(ans, dist(cmp, v));
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