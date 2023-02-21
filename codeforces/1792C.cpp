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

	vector<int> v(n + 1), pos(n + 1);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		pos[v[i]] = i;
	}

	vector<int> len(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		if (pos[i] > pos[i - 1]) len[i] = len[i - 1] + 1;
		else len[i] = 1;
	}

	int ans = n;
	for (int i = 1; i <= n; i++) {
		ans = min(ans, max(n - i, i - len[i]));
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