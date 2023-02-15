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

ll func(ll n, ll s, vector<ll> v)
{
	vector<ll> x(n - 1, 1), y(n - 1, 1);

	for (ll i = 1; i < n - 1; i++) {
		ll mx = max(v[i] - s, s);
		ll mn = min(v[i] - s, s);

		if (v[i] > v[i - 1]) {
			x[i - 1] = mx;
			y[i] = mn;
		}
		else {
			x[i - 1] = mn;
			y[i] = mx;
		}
	}

	if (v[n - 1] > v[n - 2]) {
		swap(x[n - 3], y[n - 2]);
	}

	// for (auto it : x)
	// 	cout << it << ' ';
	// cout << endl;
	// for (auto it : y)
	// 	cout << it << ' ';
	// cout << endl;

	ll ans = x[0] * v[0] + v[n - 1] * y[n - 2];
	for (ll i = 1; i < n - 2; i++)
		ans += x[i] * y[i];
	return ans;
}

void solve()
{
	ll n, s;
	cin >> n >> s;
	vector <ll> v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	ll ans1 = func(n, s, v);

	reverse(v.begin(), v.end());
	ll ans2 = func(n, s, v);

	ll ans = min(ans1, ans2);
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