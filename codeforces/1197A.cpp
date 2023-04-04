#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define PI acos(-1)
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

	vector<int> v(n);
	for (auto &it : v)
		cin >> it;

	sort(v.begin(), v.end());

	int ans = min(v[n - 2] - 1, n - 2);
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
