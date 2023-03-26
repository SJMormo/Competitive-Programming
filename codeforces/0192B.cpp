#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
#define INF 1e4

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	int n;
	cin >> n;

	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 1; i < n - 1; i++)
	{
		if (v[i] < v[i - 1] && v[i] < v[i + 1])
		{
			v[i] = INF;
			i++;
		}
	}

	int res = INF;
	for (int i = 0; i < n; i++)
	{
		res = min(res, v[i]);
	}
	cout << res << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	while (t--)
		solve();

	return 0;
}
