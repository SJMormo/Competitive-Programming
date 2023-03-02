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
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	ll cur = 0, ans = 0;
	priority_queue<ll> pq;

	for (ll i = 0; i < n; i++) {
		if (!pq.empty() and v[i] == 0) {
			ans += pq.top();
			pq.pop();
		}
		else pq.push(v[i]);
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