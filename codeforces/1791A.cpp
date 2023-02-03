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
	char x;
	cin >> x;

	std::map<char, bool> mp {
		{'c', 1}, {'o', 1}, {'d', 1}, {'e', 1}, {'f', 1}, {'r', 1}, {'e', 1}, {'s', 1}
	};

	if (mp[x] == 1) cout << "YES\n";
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