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

	vector<int> cnt(n + 1, 0);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x <= n)
			cnt[x]++;
	}

	vector<int> track(n + 1, 0);
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j += i)
			track[j] += cnt[i];

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, track[i]);
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