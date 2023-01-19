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
	ll n, k;
	cin >> n >> k;

	ll indi = 1;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;

		if (x == indi) {
			indi++;
		}
	}
	// cout << indi << ' ';
	ll res = (n - indi + k) / k;
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