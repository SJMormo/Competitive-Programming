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

	vector<ll> v(n + 1);
	for (ll i = 1; i <= n; i++)
		cin >> v[i];

	ll res = 0;
	std::vector<ll> track(n + 1, 0);
	ll trackId = 1;
	for (ll i = 1; i < n; i++) {
		if (track[i]) continue;

		ll e = i;
		ll cnt = 0;
		while (track[e] == 0) {
			track[e] = trackId;
			// cout << e << ' ';
			e = v[e];
			cnt++;
		}
		// cout << "c " << cnt << endl;
		res += (cnt - 1);
		++trackId;
	}

	bool indi = true;
	for (ll i = 2; i <= n; i++)
		if (track[i] == track[i - 1]) {
			res--;
			indi = false;
			break;
		}

	if (indi)
		res++;

	cout << res << '\n';
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