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
	ll n, m;
	cin >> n >> m;
	ll arr[n][m];
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	ll ans = 0;
	for (ll j = 0; j < m; j++) {
		vector<ll> vec(n);
		for (ll i = 0; i < n; i++) {
			vec[i] = arr[i][j];
		}

		sort(vec.rbegin(), vec.rend());
		for (ll i = 0, k = n - 1; i < n; i++, k--) {
			ans += k * vec[i];
			ans -= i * vec[i];
		}
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