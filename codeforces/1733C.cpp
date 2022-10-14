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
}


void solve()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	if (n == 1)
	{
		cout << 0 << '\n';
		return;
	}

	int x = v[0] + v[n - 1];
	if (x % 2)
		v[n - 1] = v[0];
	else
		v[0] = v[n - 1];

	vector<pair<int, int>> res;
	res.push_back({1, n});

	if (v[n - 1] % 2)
	{
		for (int i = n - 2; i > 0; i--)
		{
			if (v[i] % 2)
			{
				res.push_back({i + 1, n});
			}
		}
		for (int i = 1; i < n - 1; i++)
		{
			if (!(v[i] % 2))
			{
				res.push_back({1, i + 1});
			}
		}
	}
	else
	{
		for (int i = n - 2; i > 0; i--)
		{
			if (!(v[i] % 2))
			{
				res.push_back({i + 1, n});
			}
		}
		for (int i = 1; i < n - 1; i++)
		{
			if (v[i] % 2)
			{
				res.push_back({1, i + 1});
			}
		}
	}

	cout << res.size() << '\n';
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i].first << ' ' << res[i].second << '\n';
	}
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
