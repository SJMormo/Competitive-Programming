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
	int n, m;
	cin >> n >> m;

	string s, t;
	cin >> s >> t;

	int indi1 = 0;
	for (int i = 1; i < n; i++)
		if (s[i] == s[i - 1]) {
			indi1++;
		}

	int indi2 = 0;
	for (int i = 1; i < m; i++)
		if (t[i] == t[i - 1]) {
			indi2++;
		}

	if (indi2 == 0 and indi1 == 0) {
		cout << "YES\n";
		return;
	}
	if (indi1 > 0 and indi2 > 0) {
		cout << "NO\n";
		return;
	}
	else if (indi2 > 1 or indi1 > 1) {
		cout << "NO\n";
		return;
	}

	if (s[n - 1] == t[m - 1]) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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