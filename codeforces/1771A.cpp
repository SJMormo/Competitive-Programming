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

	std::map<ll, ll> mp;

	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
		arr[v[i]]++;
	}

	sort(v.begin(), v.end());

	ll ans = arr[v[0]] * arr[v[n - 1]] * 2;

	if (arr[v[0]] == n) {
		ans = n * (n - 1);
	}
	cout << ans << '\n';
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