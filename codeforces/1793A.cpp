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
	ll a, b, n, m;
	cin >> a >> b >> n >> m;

	ll ans = min(a * n, b * n);
	// cout << ans << endl;

	ll x = n / (m + 1);
	x *= a * m;
	// cout << x << endl;
	ll baki = n % (m + 1);
	baki = min(baki * a, baki * b);
	x += baki;

	ans = min(ans, x);

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