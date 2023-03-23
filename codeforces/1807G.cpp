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

	vector <ll> v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	ll curr = 1;
	if (v[0] != 1) {
		cout << "NO\n";
		return;
	}
	for (int i = 1; i < n; i++) {
		// cout << v[i] << ' ' << curr << endl;
		if (v[i] > curr) {
			cout << "NO\n";
			return;
		}
		curr += v[i];
	}

	cout << "YES\n";
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