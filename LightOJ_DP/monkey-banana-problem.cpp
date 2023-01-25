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

	ll arr[2 * n + 1][2 * n + 1];
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}
	for (ll i = n + 1, k = n - 1; i < 2 * n; i++, k--) {
		for (ll j = 1; j <= k; j++) {
			cin >> arr[i][j];
		}
	}

	for (ll i = 2; i <= n; i++) {
		for (ll j = 1; j <= i; j++) {
			if (j == 1)
				arr[i][j] += arr[i - 1][j];
			else if (j == i)
				arr[i][j] += arr[i - 1][j - 1];
			else {
				arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
			}
		}
	}

	for (ll i = 2 * n - 2, k = 2; i >= n; i--, k++) {
		for (ll j = 1; j <= k; j++) {
			if (j == 1)
				arr[i][j] += arr[i + 1][j];
			else if (j == k)
				arr[i][j] += arr[i + 1][j - 1];
			else {
				arr[i][j] += max(arr[i + 1][j], arr[i + 1][j - 1]);
			}
		}
	}

	ll ans = 0;
	for (ll i = 1; i <= n; i++)
		ans = max(ans, arr[n][i]);
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}