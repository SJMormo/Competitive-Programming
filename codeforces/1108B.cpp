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

std::vector<int> divisors(int n)
{
	std::vector<int> div;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n / i == i)
				div.push_back(i);
			else
			{
				div.push_back(i);
				div.push_back(n / i);
			}
		}
	}
	return div;
}

void solve()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	int res1 = v[n - 1];

	vector<int> v2 = divisors(res1);

	for (int i = 0; i < n; i++)
	{
		if (i < n - 1 && v[i] == v[i + 1])
			continue;
		if (find(v2.begin(), v2.end(), v[i]) != v2.end())
			v[i] = 1;
	}

	int res2 = 1;
	for (int i = 0; i < n; i++)
		res2 = max(res2, v[i]);

	cout << res1 << ' ' << res2 << '\n';
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
