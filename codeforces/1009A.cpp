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

	int arr[n];
	queue<int>q;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (q.empty())
			break;
		int cur = q.front();
		// cout << cur << ' ';
		if (arr[i] <= cur)
		{
			res++;
			q.pop();
			// cout << res;
		}
		// cout << endl;
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
