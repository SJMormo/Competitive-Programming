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
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;

	int ans = a1;

	if (ans == 0) {
		++ans;
		cout << ans << '\n';
		return;
	}

	int mn = min(a2, a3);
	ans += (mn << 1);

	ans += min(a1 + 1, abs(a2 - a3) + a4);

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