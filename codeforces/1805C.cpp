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



		// mxk
		ll left = (b - mxk) * (b - mxk);
		ll right = 4 * a * c;

		if (left < right) {
			cout << "YES\n" << mxk << '\n';
		}
		else {
			left = (b - mnk) * (b - mnk);

			if (left < right) {
				cout << "YES\n" << mnk << '\n';
			}
			else
				cout << "NO\n";
		}
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