#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
#define INF 1e18

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

ll bs_sqrt(ll x)
{
	ll left = 0, right = 1e9 + 1;
	while (right > left) {
		ll mid = (left + right) / 2;

		if (mid * mid > x) right = mid;
		else left = mid + 1;

		// cout << left << ' ' << right << ' ' << mid << endl;
	}
	return left - 1;
}

void solve()
{
	ll l, r;
	cin >> l >> r;

	ll res = 0;

	ll a = bs_sqrt(l);
	ll b = bs_sqrt(r);

	if (a == b)
	{
		for (int i = 0; i < 3; i++)
		{
			if (l <= a * (a + i) && a * (a + i) <= r)
				res++;
		}
	}
	else
	{
		res = (b - a - 1) * 3;
		for (int i = 0; i < 3; i++)
		{
			if (l <= a * (a + i) && a * (a + i) <= r)
				res++;
			if (l <= b * (b + i) && b * (b + i) <= r)
				res++;
		}
	}
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
