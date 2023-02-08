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

	ll sum = (n << 1);

	// bool indi = true;

	ll a = n, b = 0;
	for (ll i = 31; i >= 0; i--) {
		ll value = (1ll << i);

		if (checkbit(a, i)) {
			sum -= value;
			continue;
		}

		value = (value << 1);
		if (value <= sum) {
			a = setbit(a, i);
			b = setbit(b, i);
			sum -= value;
		}

		if (sum == 0 && (a ^ b) == n) {
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