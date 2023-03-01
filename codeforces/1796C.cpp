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
	return (a % mod + b % mod) % mod;
}

ll sub(ll a, ll b)
{
	return (a % mod - b % mod) % mod;
}

ll mul(ll a, ll b)
{
	return (a % mod * b % mod) % mod;
}

void solve()
{
	ll l, r;
	cin >> l >> r;

	ll max_len = 1;
	ll x = l;
	while ((x << 1) <= r) {
		max_len++;
		x <<= 1;
	}
	// cout << max_len << endl;

	ll left = l, right = l * 2 - 1, kaje_lagbe = l;
	ll ans = 0;

	while (left <= right) {
		ll mid = left + ((right - left) / 2);

		x = mid;
		vector<ll> check;
		while (x <= r) {
			check.push_back(x);
			x <<= 1;
		}

		if (check.size() == max_len) {
			left = mid + 1;
			kaje_lagbe = mid;
			ans = add(sub(mid, l), 1);
		}
		else right = mid - 1;
	}
	// cout << ans << ' ' << kaje_lagbe << endl;

	left = l, right = kaje_lagbe;
	ll ans2 = 0;
	while (left <= right) {
		ll mid = left + ((right - left) / 2);

		x = mid;
		vector<ll> check;
		check.push_back(x);
		x *= 3;
		while (x <= r) {
			check.push_back(x);
			x <<= 1;
		}

		if (check.size() == max_len) {
			left = mid + 1;
			ans2 = mul(add(sub(mid, l), 1), max_len);
			// cout << "mid " << mid << ' ' << left << endl;
			ans2 -= (mid - l + 1);
		}
		else right = mid - 1;
	}
	// cout << ans2 << endl;
	ans += ans2;
	cout << max_len << ' ' << ans << endl;
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