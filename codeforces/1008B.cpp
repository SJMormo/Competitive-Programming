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
	int n;
	cin >> n;

	std::vector<pair<int, int>> arr;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}

	int mx = max(arr[0].first, arr[0].second);
	int mn = min(arr[0].first, arr[0].second);

	arr[0].first = mn;
	arr[0].second = mx;

	for (int i = 1; i < n; i++)
	{
		mx = max(arr[i].first, arr[i].second);
		mn = min(arr[i].first, arr[i].second);

		if (mx <= arr[i - 1].second)
		{
			arr[i].first = mn;
			arr[i].second = mx;
		}
		else if (mn <= arr[i - 1].second)
		{
			arr[i].first = mx;
			arr[i].second = mn;
		}
		else
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";

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
