#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18

ll setbit(ll num, ll pos) {return num |= (1ll << pos);}
ll checkbit(ll num, ll pos) {return (num >> pos) & 1ll;}
ll clearbit(ll num, ll pos) {return num &= ~(1ll << pos);}
ll togglebit(ll num, ll pos) {return num ^= (1ll << pos);}
ll changebit(ll num, ll pos, ll val) {return num ^= (-val ^ num) & (1ll << pos);}

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

	bool indi = true;

	ll a = n, b = 0;
	for (ll i = 32; i >= 0; i--) {
		ll k = checkbit(n, i);
		if (k) indi = false;
		if (indi || k) continue;

		a = setbit(a, i);
		b = setbit(b, i);

		// cout << a << ' ' << b << endl;

		if (a ^ b == n && (a + b) == 2 * n) {
			cout << a << ' ' << b << '\n';
			return;
		}
	}

	cout << -1 << '\n';
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