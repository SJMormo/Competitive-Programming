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
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	ll ultimate_or = 0;
	vector<ll> ans;
	for (ll i = 0; i < min(32ll, n); i++) {
		ll curr_or = ultimate_or, indx = -1;
		for (ll j = 0; j < n; j++) {
			if (v[j] == -1) continue;

			if ((ultimate_or | v[j]) >= curr_or) {
				curr_or = ultimate_or | v[j];
				// cout << curr_or << '\n';
				indx = j;
			}
		}
		ultimate_or = curr_or;
		ans.push_back(v[indx]);
		v[indx] = -1;
	}

	for (ll i = 0; i < n; i++)
		if (v[i] != -1)
			ans.push_back(v[i]);

	for (ll i = 0; i < n; i++)
		cout << ans[i] << ' ';
	cout << '\n';
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