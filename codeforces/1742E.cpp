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
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	ll cur = v[0];
	vector<ll> track(n);
	for (int i = 0; i < n; i++) {
		if (v[i] > cur)
			cur = v[i];
		track[i] = cur;
	}

	// for (auto it : track)
	// 	cout << it << ' ';
	// cout << endl;

	vector<ll> presum(n + 1);
	presum[0] = v[0];
	for (int i = 1; i < n; i++)
		presum[i] = presum[i - 1] + v[i];

	// for (auto it : presum)
	// 	cout << it << ' ';
	// cout << endl;

	for (int i = 0; i < q; i++) {
		ll x;
		cin >> x;

		ll upper = upper_bound(track.begin(), track.end(), x) - track.begin() - 1;
		// cout << upper << endl;
		if (upper < 0) {
			cout << 0 << ' ';
		}
		else
			cout << presum[upper] << ' ';
	}
	cout << '\n';
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
