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

	vector<ll> v(n);
	set<ll> s;

	for (ll i = 0; i < 200; i++) {
		vector<ll> vec = v;
		for (ll j = 0; j < n; j++) {
			cout << vec[j] << ' ';
			vec[j] = abs(vec[j] - i);
		}
		cout << endl;

		if (is_sorted(vec.begin(), vec.end())) {
			cout << "YES " << i << endl;
		}
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