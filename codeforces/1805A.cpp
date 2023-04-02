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
	int ans = 0;
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ans = ans xor v[i];
	}

	vector<int> notun(n);
	for (int i = 0; i < n; i++) {
		notun[i] = v[i] xor ans;
	}

	// for (auto it : notun)
	// 	cout << it << ' ';
	// cout << endl;

	int res = 0;
	for (int i = 0; i < n; i++) {
		res = res xor notun[i];
		// cout << res << endl;
	}

	if (res != 0)
		ans = -1;
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