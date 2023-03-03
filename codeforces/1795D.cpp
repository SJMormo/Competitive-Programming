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

int mod = 998244353;

ll

long long nCr (long long n, long long r)
{
	long long p = 1, k = 1;
	if (n - r < r)
		r = n - r;

	while (r) {
		p *= n;
		k *= r;
		long long gcd = __gcd(p, k);
		p /= gcd;
		k /= gcd;
		--n;
		--r;
	}

	return p;
}

void solve()
{
	ll n;
	cin >> n;

	n /= 3;

	ll ans = nCr(n, n / 2);

	for (ll i = 0; i < n; i++) {
		vector <ll> v(3);
		for (auto &it : v) cin >> it;
		sort(v.begin(), v.end());
		if (v[0] == v[2]) ans *= 3;
		else if (v[0] == v[1]) ans *= 2;
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