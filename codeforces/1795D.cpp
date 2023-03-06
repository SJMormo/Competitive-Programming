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

ll mod = 998244353;

ll add(ll a, ll b)
{
	return ((a + b) % mod + mod) % mod;
}

ll mul(ll a, ll b)
{
	return (a * b) % mod;
}

ll binpow(ll a, ll b)
{
	a %= mod;
	long long res = 1;

	while (b > 0) {
		if (b & 1)
			res = res * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return res;
}

ll inv(ll a)
{
	return binpow(a, mod - 2);
}

ll divide(ll a, ll b)
{
	return mul(a, inv(b));
}

void solve()
{
	ll n;
	cin >> n;

	ll ans = 1;

	for (ll i = 1; i <= n / 3; i++) {
		ans = mul(ans, i);
	}
	for (ll i = 1; i <= n / 6; i++) {
		ans = divide(ans, i);
		ans = divide(ans, i);
	}

	n /= 3;
	for (ll i = 0; i < n; i++) {
		vector <ll> v(3);
		for (auto &it : v) cin >> it;
		sort(v.begin(), v.end());
		if (v[0] == v[2]) ans = mul(ans, 3);
		else if (v[0] == v[1]) ans = mul(ans, 2);
	}

	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}