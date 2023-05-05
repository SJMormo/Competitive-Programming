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

bool checkPalindrome(vector<ll> a, ll x) {
	ll n = a.size();
	for (ll i = 0; i < n / 2; i++) {
		if (a[i] % x != a[n - i - 1] % x) {
			return false;
		}
	}
	return true;
}

void solve()
{
	ll n;
	cin >> n;

	vector<ll> v(n), check(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		check[i] = v[i];
	}
	reverse(check.begin(), check.end());
	if (check == v or n == 1) {
		cout << 0 << '\n';
		return;
	}

	ll i = 0, j = n - 1;
	ll ans = 1;
	std::map<int, bool> mp;
	while (i <= j) {
		ll x = abs(v[i] - v[j]);
		// cout << x << endl;
		if (x != 0 and mp[x] == 0 and checkPalindrome(v, x))
			ans = max(ans, x);
		mp[x] = 1;
		++i, --j;
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