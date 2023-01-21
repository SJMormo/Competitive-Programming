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

ll modFact(ll n, ll p)
{
	if (n >= p)
		return 0;

	ll result = 1;
	for (ll i = 1; i <= n; i++)
		result = (result * i) % p;

	return result;
}

void solve()
{
	ll n;
	cin >> n;

	ll p = 1000000007;

	ll loop = modFact(n, p) % p;
	// cout << loop << '\n';

	ll res = 0;
	for (ll i = 1; i < n; i++) {
		res += ((i + i) % p) % p;
	}

	res = ((loop % p) * (res % p)) % p;

	cout << res << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}