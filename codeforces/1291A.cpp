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

	char arr[n];
	cin >> arr;

	string res = "";

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		res += arr[i];

		sum += arr[i] - '0';

		if (sum % 2 == 0 && ((arr[i] - 48) % 2) == 1)
		{
			cout << res << '\n';
			return;
		}
	}
	cout << -1 << '\n';
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
