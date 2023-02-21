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
	ll n; cin >> n;
	vector <ll> a(n + 1), b(n + 1);
	for (ll i = 1; i <= n; i++) cin >> a[i];
	for (ll i = 1; i <= n; i++) cin >> b[i];

	vector<ll> cumsum(n + 1, 0), cnt(n + 2, 0), add(n + 2, 0);
	for (ll i = 1; i <= n; i++) cumsum[i] = cumsum[i - 1] + b[i];

	for (ll i = 1; i <= n; i++) {
		ll indx = -1, l = i, r = n;
		while (l <= r) {
			ll mid = (l + r) / 2;
			if (a[i] >= cumsum[mid] - cumsum[i - 1]) {
				l = mid + 1;
				indx = mid;
			}
			else r = mid - 1;
		}
		if (indx == -1) add[i] += a[i];
		else {
			cnt[i]++, cnt[indx + 1]--;
			ll left = a[i] - (cumsum[indx] - cumsum[i - 1]);
			add[indx + 1] += left;
		}
	}

	for (ll i = 1; i <= n; i++) cnt[i] += cnt[i - 1];
	for (ll i = 1; i <= n; i++) {
		ll ans = add[i] + (cnt[i] * b[i]);
		cout << ans << ' ';
	}
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