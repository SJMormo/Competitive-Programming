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

	string t;
	t.push_back(tolower(st[0]));
	// cout << t << endl;
	for (int i = 1; i < n; i++) {
		st[i] = tolower(st[i]);
		if (st[i] != t.back()) t.push_back(st[i]);
	}

	t == "meow" ? cout << "YES\n" : cout << "NO\n";
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