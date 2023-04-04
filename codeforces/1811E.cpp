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

	vector<ll> ans;
	while (n) {
		ll res = (n % 9) + ((n % 9) > 3);
		ans.push_back(res);
		n /= 9;
	}

	reverse(ans.begin(), ans.end());
	for (auto it : ans)
		cout << it;
	cout << '\n';
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