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
	ll x, y;
	cin >> x >> y;

	if (x < y) {
		ll c = y - 1;
		ll num = 1 + c * (c + 1);

		// bame kombe naki barbe
		ll bam = y - x;
		if (y & 1) num += bam;
		else num -= bam;
		cout << num << '\n';
	}
	else {
		ll c = x - 1;
		ll num = 1 + c * (c + 1);

		// bame kombe naki barbe
		ll bam = x - y;
		if (x & 1) num -= bam;
		else num += bam;
		cout << num << '\n';
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