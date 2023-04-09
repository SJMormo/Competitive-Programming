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

vector<int> v[1000];

void solve()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	int cnt = 0;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0, m = n - 1; j < n; j++, m--) {
			if (v[i][j] != v[n - 1 - i][m]) {
				cnt++;
			}
			// cout << i << j << ' ' << v[i][j] << '\t' << n - 1 - i << k << ' ' << v[n - 1 - i][k] << endl;
		}
		// cout << endl << endl;
	}

	if (n & 1) {
		for (int i = 0, m = n - 1; i < n / 2; i++, m--) {
			if (v[n / 2][i] != v[n / 2][m])
				cnt++;
		}
	}

	int res = k - cnt;
	// cout << res << ' ' << k << endl;
	if (res < 0) cout << "NO\n";
	else if (res > 0 and ~n & 1 and res & 1) cout << "NO\n";
	else cout << "YES\n";

	for (int i = 0; i < n; i++)
		v[i].clear();
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