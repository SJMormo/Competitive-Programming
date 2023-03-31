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
	ll n, out, in;
	cin >> n >> out >> in;

	map<ll, ll> track;
	ll ans = INF;
	ll xtra = 0;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		track[x]++;
		if (track[x] > 1) xtra += out;
	}

	if (track[1] == 0) {
		xtra += in;
		// remove++;
		track[1] = 1;
	}
	ll remove = track.size() - 1;
	ll add = 1;

	for (auto it : track) {
		ans = min(ans, (remove * out) + ((it.first - add) * in));
		add++;
		remove--;
	}
	cout << ans + xtra << '\n';
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