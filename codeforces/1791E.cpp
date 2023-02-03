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

	ll neg = 0;
	ll ans = 0;
	ll mn = 1000000001;

	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] < 0) neg++;
		ans += abs(v[i]);
		mn = min(mn, abs(v[i]));
	}

	if (neg % 2 == 0) {
		cout << ans << '\n';
	}
	else {
		ans -= 2 * mn;
		cout << ans << '\n';
	}

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