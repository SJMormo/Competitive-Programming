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
	vector<ll> v(n + 1, 0);
	for (ll i = 1; i <= n; i++) {
		cin >> v[i];
		v[i] += v[i - 1];
	}


	ll l = 1;
	ll r = n;
	ll inter;

	while (l != r)
	{
		ll mid = (l + r) / 2;

		ll q = mid - l + 1;
		cout << "? " << q;
		for (int i = l; i <= mid; i++)
			cout << ' ' << i;
		cout << '\n';
		cout << flush;

		cin >> inter;

		ll sum = v[mid] - v[l - 1];
		if (inter > sum) r = mid;
		else l = mid + 1;

		// cout << l << ' ' << r << endl;
	}
	cout << "! " << r << '\n';
	cout << flush;
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