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
	ll n, c, d;
	cin >> n >> c >> d;

	vector<ll> v(n);
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	for (ll i = 0; i < min(n, d); i++) {
		sum += v[i];
	}

	if (sum >= c) {
		cout << "Infinity\n";
		return;
	}
	else if (v[0] * d < c) {
		cout << "Impossible\n";
		return;
	}

	vector<ll> prefix(n);
	prefix[0] = v[0];
	for (ll i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + v[i];
	}

	ll ans = 0;
	for (ll k = 1; ; k++) {
		ll x = (d % (k + 1)) - 1;
		ll calc;
		if (x < 0)
			calc = (prefix[min(k, n - 1)] * (d / (k + 1)));
		else
			calc = (prefix[min(k, n - 1)] * (d / (k + 1))) + prefix[min(x, n - 1)];

		// cout << k << ' ' << x << ' ' << calc << endl;
		if (calc >= c)
			ans = max(ans, k);
		else break;
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
