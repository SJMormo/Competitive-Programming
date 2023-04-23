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

	multiset<ll> st;
	std::map<ll, ll> mp;

	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;

		mp[x]++;
		st.insert(x);
	}

	ll ans = 0;
	ll first = *st.begin();
	st.erase(first);

	ll second = -1;
	if (!st.empty()) {
		second = *st.begin();
		st.erase(second);
	}

	// cout << first << ' ' << second << endl;

	for (auto it : st) {
		ans += mp[second] + mp[first];
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