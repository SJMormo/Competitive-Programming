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
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (auto &it : v)
		cin >> it;

	sort(v.begin(), v.end());

	int ans = n, longest = 1;
	for (int i = 1; i < n; i++) {
		if (v[i] - v[i - 1] > k) ans = min(ans, n - longest), longest = 1;
		else longest++;
		// cout << ans << ' ' << longest << endl;
	}
	ans = min(ans, n - longest);

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