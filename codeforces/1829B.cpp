#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

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

	vector<int> v(n);
	for (auto &it : v) cin >> it;

	int mx = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == 0) cnt++;
		else cnt = 0;

		mx = max(mx, cnt);
	}

	cout << max(cnt, mx) << '\n';
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