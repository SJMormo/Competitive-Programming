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
	int a, b, c;
	cin >> a >> b >> c;

	int A = max(0, max(b, c) + 1 - a);
	int B = max(0, max(a, c) + 1 - b);
	int C = max(0, max(a, b) + 1 - c);
	cout << A << ' ' << B << ' ' << C << '\n';
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
