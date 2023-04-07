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

ll sum(ll n)
{
	ll s = 0;
	while (n) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

void solve()
{
	ll n, s;
	cin >> n >> s;

	ll ans = 0;
	if (sum(n) <= s) {
		cout << ans << '\n';
		return;
	}

	ll mul = 1;

	for (ll i = 0; i < 18; i++) {
		ll digit = (n / mul) % 10;
		ll add = (10 - digit) * mul;
		ans += add;
		n += add;

		if (sum(n) <= s) {
			cout << ans << '\n';
			break;
		}
		mul *= 10;
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