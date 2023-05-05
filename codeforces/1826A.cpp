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
	int n;
	cin >> n;

	vector<int> v(n), check(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		check[i] = n - v[i];
	}

	for (int i = n; i >= 0; i--) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (check[j] >= i)
				cnt++;
		}
		if (cnt == i) {
			cout << n - i << '\n';
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

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}