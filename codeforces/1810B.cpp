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

	if (n % 2 == 0) {
		cout << -1 << '\n';
		return;
	}

	vector<ll> ans;
	while (true) {
		if (n == 1)
			break;

		ll x = (n + 1) / 2;
		ll y = (n - 1) / 2;

		if (x % 2 == 0) {
			ans.push_back(2);
			n = y;
		}
		else {
			ans.push_back(1);
			n = x;
		}
	}

	if (ans.size() > 40) {
		cout << "-1\n";
	}
	else {
		reverse(ans.begin(), ans.end());
		cout << ans.size() << '\n';
		for (ll i = 0; i < ans.size(); i++) {
			cout << ans[i] << ' ';
		}
		cout  << '\n';
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