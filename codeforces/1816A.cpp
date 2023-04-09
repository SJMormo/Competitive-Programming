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
	ll a, b;
	cin >> a >> b;

	ll x = a - 1;
	if (a == 0)
		x = a + 1;
	cout << 2 << '\n';
	cout << x << ' ' << 1 << '\n';
	cout << a << ' ' << b << '\n';

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