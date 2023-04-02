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

	char x = st[n - 1];
	int pos = n - 1;
	for (int i = n - 1; i >= 1; i--) {
		if (x > st[i]) {
			x = st[i];
			pos = i;
		}
	}

	string ans = "";
	ans.push_back(x);
	for (int i = 0; i < n; i++) {
		if (i != pos) {
			ans.push_back(st[i]);
		}
	}

	if (st[0] < ans[0]) {
		ans = st;
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