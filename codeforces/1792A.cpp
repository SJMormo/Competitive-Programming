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
	int n;
	cin >> n;

	int cnt_one = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 1)
			cnt_one++;
	}

	if (cnt_one & 1) {
		--cnt_one;
	}

	int ans = (n - cnt_one) + (cnt_one / 2);
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