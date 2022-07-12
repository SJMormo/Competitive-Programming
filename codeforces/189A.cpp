#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
#define INF 1e18

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
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int res = 0;
	for (int i = 0; a * i <= n ; i++)
	{
		for (int j = 0; ((a * i) + (b * j)) <= n ; j++)
		{
			int left = n - (a * i) - (b * j);
			if (left % c == 0)
			{
				int k = left / c;
				res = max(res, i + j + k);
			}
		}
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
