#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	ll n, m;
	cin >> n >> m;

	vector<ll> track(n + 1, -1);

	for (ll i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;

		ll mx = max(x, y);
		ll mn = min(x, y);

		track[mx] = max(track[mx], mn);
	}

	ll last = 0, ans = 0;
	for (ll i = 1; i <= n; i++) {
		// cout << track[i] << endl;
		last = max(last, track[i]);
		ans += i - last;
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