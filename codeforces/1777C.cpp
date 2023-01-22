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


set<ll> divisors(ll n, set<ll> s)
{
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			s.erase(i);
			s.erase(n / i);
		}
	}
	return s;
}

void solve()
{
	ll n, m;
	cin >> n >> m;

	std::vector<ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	set<ll> s;
	for (ll i = 1; i <= m; i++)
		s.insert(i);

	ll x = 0;
	for (ll i = 0; i < n; i++) {
		if (v[i] <= m) {
			s = divisors(v[i], s);
			cnt++;
		}

		if (s.empty()) {
			cout << m - v[i] << '\n';
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

	while (t--)
		solve();

	return 0;
}