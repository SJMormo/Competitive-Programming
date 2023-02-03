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

	string st;
	cin >> st;

	int x = 0, y = 0;
	bool ans = false;
	for (int i = 0; i < n; i++) {
		if (st[i] == 'L') --x;
		else if (st[i] == 'R') ++x;
		else if (st[i] == 'U') ++y;
		else if (st[i] == 'D') --y;

		if (x == 1 && y == 1) ans = true;
	}

	if (ans) cout << "YES\n";
	else cout << "NO\n";
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