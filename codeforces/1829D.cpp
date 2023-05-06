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
	ll n, k;
	cin >> n >> k;

	if (n == k) {
		cout << "YES\n";
		return;
	}

	vector<ll> ans;
	ans.push_back(n);
	int i = 0;
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] % 3 == 0) {
			ll x = ans[i] / 3;
			ll y = x * 2;
			ans.push_back(x);
			ans.push_back(y);

			if (x == k or y == k) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";

	// if (n % 3 != 0) {
	// 	cout << "No\n";
	// 	return;
	// }

	// ll one = k * 2;
	// one += k;
	// if (one % 3 == 0 and one <= n) {
	// 	cout << "YES\n";
	// 	return;
	// }

	// if (~k & 1) {
	// 	ll two = k / 2;
	// 	two += k;

	// 	if (two % 3 == 0 and two <= n) {
	// 		cout << "YES\n";
	// 		return;
	// 	}
	// }

	// cout << "NO\n";


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