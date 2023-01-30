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

	if (n % 2 == 0) {
		cout << 1 << ' ' << n / 2 << '\n';
		return;
	}
	else {
		for (ll x = 1; x <= 12; x++) {
			ll t = (5 * pow(x, 5)) + (pow(5, x) * x);
			if (t == n) {
				cout << 5 << ' ' << x << '\n';
				return;
			}
		}
	}

	cout << -1 << '\n';
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