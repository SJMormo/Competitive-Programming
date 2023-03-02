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

	for (int i = 0; i < n; i++) {
		st[i] = tolower(st[i]);
		// cout << st[i] << endl;
		if (st[i] != 'm' and st[i] != 'e' and st[i] != 'o' and st[i] != 'w') {
			cout << "NO\n";
			return;
		}
	}

	map<char, bool> mp;
	for (int i = 0; i < n; i++) {
		if (st[i] == 'm' and (mp['e'] == 1 or mp['o'] == 1 or mp['w'] == 1)) {
			cout << "NO\n";
			return;
		}
		else if (st[i] == 'e' and (mp['o'] == 1 or mp['w'] == 1)) {
			cout << "NO\n";
			return;
		}
		else if (st[i] == 'o' and (mp['w'] == 1)) {
			cout << "NO\n";
			return;
		}
		mp[st[i]] = 1;
	}

	if (mp['m'] == 0 or mp['e'] == 0 or mp['o'] == 0 or mp['w'] == 0) {
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