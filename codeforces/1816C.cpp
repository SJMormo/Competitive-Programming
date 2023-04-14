#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

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

	vector<ll> v(n);
	for (auto &it : v)
		cin >> it;

	ll mx = *max_element(v.begin(), v.end());

	for (ll i = n - 1; i >= 1; i--) {
		if (v[i] < mx) {
			v[i - 1] += mx - v[i];
			v[i] = mx;
		}
		else if (v[i] > mx) {
			v[i - 1] -= v[i] - mx;
			v[i] = mx;
		}
	}

	if (v[0] > v[1] and ~n & 1) {
		cout << "NO\n";
	}
	else cout << "YES\n";

	// if (is_sorted(v.begin(), v.end())) cout << "YES\n";
	// else cout << "NO\n";
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