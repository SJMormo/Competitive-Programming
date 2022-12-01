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
	ll n, q;
	cin >> n >> q;
	vector <ll> v(n, 0);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	vector<ll> prefix(n, 0);
	prefix[0] = v[0];
	for (ll i = 1; i < n; i++)
		prefix[i] = prefix[i - 1] + v[i];

	// for (auto it : prefix) cout << it << ' '; cout << endl;

	for (ll i = 0; i < q; i++) {
		ll x; cin >> x;

		ll ans = 0;
		ll upper = upper_bound(v.begin(), v.end(), x) - v.begin();
		if (upper < n) {
			ll element = n - upper;
			if (upper == 0) ans += (prefix[n - 1]) - (x * element);
			else ans += (prefix[n - 1] - prefix[upper - 1]) - (x * element);
		}

		ll lower = lower_bound(v.begin(), v.end(), x) - v.begin() - 1;
		if (lower >= 0) {
			ll element = lower + 1;
			ans += (x * element) - prefix[lower];
		}
		cout << ans << endl;
	}
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
