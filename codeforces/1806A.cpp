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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	if (d < b) {
		cout << "-1\n";
		return;
	}

	ll cost = 0;
	ll y = d - b;
	a += y;
	b += y;
	cost += abs(y);

	if (c > a) {
		cout << "-1\n";
		return;
	}
	cost += abs(c - a);
	a += (c - a);
	cout << cost << '\n';
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