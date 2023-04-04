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
	int n; cin >> n;
	char d;
	string s;
	cin >> d >> s;

	int pos = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] < d) {
			pos = i;
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		if (i == pos) cout << d;
		cout << s[i];
	}

	if (pos == -1)
		cout << d;

	cout << '\n';
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