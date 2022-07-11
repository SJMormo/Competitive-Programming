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
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	a--, x--, b--, y--;

	while (true)
	{
		if (a == b)
		{
			cout << "YES\n";
			return;
		}
		if (a == x || b == y)
			break;

		a = (a + 1) % n;
		b = (b - 1 + n) % n;
	}
	cout << "NO\n";
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
