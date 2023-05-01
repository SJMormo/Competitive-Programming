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
	ll n;
	cin >> n;

	vector<ll> v(n);
	for (auto &it : v) cin >> it;

	sort(v.begin(), v.end());

	ll ans = -INF;
	if (v[0] < 0 and v[1] < 0) {
		ans = max(ans, v[0] * v[1] * 1ll);
	}

	ans = max(ans, v[n - 1] * v[n - 2] * 1ll);
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