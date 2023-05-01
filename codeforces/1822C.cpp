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

	ll ans = 26ll;

	// for (ll i = 5; i <= n; i++) {
	// 	ans = ans - ((i - 1) * (i - 1)) + (i * i) + 2;
	// }

	if (n > 4) {
		ans = 10 + n * n + 2 * (n - 4);
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