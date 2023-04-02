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
	vector<ll> line(n);

	ll mxk = -INF;
	ll mnk = INF;
	for (ll i = 0; i < n; i++) {
		cin >> line[i];
		mxk = max(mxk, line[i]);
		mnk = min(mnk, line[i]);
	}

	sort(line.begin(), line.end());

	for (ll i = 0; i < m; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		ll right = 4 * a * c;


		ll lb = lower_bound(line.begin(), line.end(), b) - line.begin();
		// cout << lb << endl;
		if (lb != n) {
			ll left = b - line[lb];
			left *= left;
			if (left < right) {
				cout << "YES\n" << line[lb] << '\n';
				continue;
			}

			if (lb - 1 >= 0) {
				left = b - line[lb - 1];
				left *= left;
				if (left < right) {
					cout << "YES\n" << line[lb - 1] << '\n';
					continue;
				}
			}
		}
		else {
			ll left = b - line[lb - 1];
			left *= left;
			if (left < right) {
				cout << "YES\n" << line[lb - 1] << '\n';
				continue;
			}
		}
		cout << "NO\n";
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