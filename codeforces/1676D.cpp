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
	int n, m;
	cin >> n >> m;

	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			int sum = 0;
			int x = i, y = j;
			while (x >= 0 && y >= 0)
			{
				sum += arr[x][y];
				x--;
				y--;
			}

			x = i, y = j;
			while (x < n && y < m)
			{
				sum += arr[x][y];
				x++;
				y++;
			}

			x = i, y = j;
			while (x >= 0 && y < m)
			{
				sum += arr[x][y];
				x--;
				y++;
			}

			x = i, y = j;
			while (x < n && y >= 0)
			{
				sum += arr[x][y];
				x++;
				y--;
			}

			sum -= arr[i][j] * 3;
			res = max(res, sum);
		}
	}
	cout << res << '\n';

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
