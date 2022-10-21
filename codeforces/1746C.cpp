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
	vector<int>arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<int>ans(n + 1, 1);
	vector<pair<int, int>> vp;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int x = arr[i - 1] - arr[i];
			vp.push_back({x, i + 1});
		}
	}
	sort(vp.begin(), vp.end());

	for (int i = 1; i < vp.size(); i++)
	{
		if (vp[i].first <= vp[i - 1].first)
		{
			vp[i].first = vp[i - 1].first + 1;
		}
	}
	// for (int i = 0; i < vp.size(); i++)
	// {
	// 	cout << vp[i].first << ' ' << vp[i].second << endl;
	// }


	for (int i = 0; i < vp.size(); i++)
	{
		ans[vp[i].first] = vp[i].second;
	}

	for (int i = 1; i <= n; i++)
		cout << ans[i] << ' ';
	cout << '\n';

	// cout << "hehe\n";
	// for (int i = 1; i <= n; i++)
	// {
	// 	for (int j = ans[i] - 1; j < n; j++)
	// 	{
	// 		arr[j] += i;
	// 	}
	// }
	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << ' ';
	// cout << '\n';
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
