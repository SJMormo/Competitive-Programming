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

	vector<ll> v1(n), v2(n), v3(n);
	map<ll, ll>pos;
	for (ll i = 0; i < n; i++) cin >> v1[i], pos[v1[i]] = i;
	for (ll i = 0; i < n; i++) cin >> v2[i];
	for (ll i = 0; i < n; i++) cin >> v3[i];

	ll ans = 1;
	vector<ll> vis(n + 1, 0);

	for (ll i = 0; i < n; i++) {
		// cout << "i " << i << endl;
		if (v3[i] == 0 and !vis[v1[i]]) {
			vis[v1[i]] = 1;
			ll initial = v1[i];
			ll cnt = 0;
			ll curr = v2[i];
			// cout << initial << ' ' << curr << endl;
			while (true) {
				if (curr == initial)
					break;
				cnt++;
				vis[curr] = 1;
				if (v3[pos[curr]] != 0) {
					// cout << "Ok\n";
					cnt = 0;
					break;
				}

				curr = v2[pos[curr]];
				// cout << curr << endl;
			}
			// cout << "cnt " << cnt << endl;
			if (cnt > 0) ans = ((ans % mod) * 2) % mod;
		}
		// cout << endl << endl;
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