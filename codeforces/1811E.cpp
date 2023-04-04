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

string to_st(ll x)
{
	string s = "";

	while (x) {
		ll m = x % 10;
		char n = m + 48;
		s += n;
		x /= 10;
	}

	reverse(s.begin(), s.end());
	return s;
}

void solve()
{
	// string st;
	// cin >> st;

	int cnt = 0;
	for (int i = 100; i < 1000; i++) {
		string s = to_st(i);
		for (auto it : s) {
			if (it == '4')
				cnt++;
		}
	}
	cout << cnt << endl;
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