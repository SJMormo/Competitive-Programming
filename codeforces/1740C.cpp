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

	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i < n - 2; i++) {
		int x = v[i + 1] - v[i] + v[n - 1] - v[i];
		ans = max(ans, x);
	}
	for (int i = n - 1; i >= 2; i--) {
		int x = v[i] - v[i - 1] + v[i] - v[0];
		ans = max(ans, x);
	}
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
