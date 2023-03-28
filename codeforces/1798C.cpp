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

	ll gcd = 0, lcm = 1, ans = 1;
	for (ll i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;

		gcd = __gcd(gcd, (a * b));

		ll gc = __gcd(lcm, b);
		lcm = (lcm * b) / gc;

		// cout << gcd << ' ' << lcm << endl;
		if (gcd % lcm) {
			++ans;
			gcd = (a * b);
			lcm = b;
		}
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