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

	vector <ll> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	vector <ll> presum(n + 1, 0);
	for (int i = 1; i <= n; i++)
		presum[i] += v[i] + presum[i - 1];

	// for (auto it : presum)
	// 	cout << it << ' ';
	// cout << endl;

	for (ll i = 0; i < q; i++) {
		ll l, r, k;
		cin >> l >> r >> k;

		ll sum = (r - l + 1) * k;
		sum += presum[l - 1];
		// cout << sum << endl;
		sum += presum[n] - presum[r];

		// cout << presum[n] << endl;


		if (sum & 1) cout << "YES\n";
		else cout << "NO\n";
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