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
	string st;
	cin >> st;

	int sum1 = 0;
	for (int i = 0; i < 3; ++i)
	{
		int num = int(st[i] - '0');
		sum1 += num;
	}

	int sum2 = 0;
	for (int i = 3; i < 6; ++i)
	{
		int num = int(st[i] - '0');
		sum2 += num;
	}

	sum2 == sum1 ? cout << "YES\n" : cout << "NO\n";
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
