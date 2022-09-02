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

	vector<ll> arr(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		if (arr[i] >= i)
			arr[i] = -1;
	}

	vector<ll> cnt(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		if (arr[i] <= 1)
			continue;
		cnt[arr[i] - 1]++;
	}

	for (int i = n - 2; i > 0; i--)
		cnt[i] += cnt[i + 1];

	ll res = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == -1)
			continue;
		res += cnt[i];
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
