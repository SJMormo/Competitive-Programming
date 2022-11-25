#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

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

	string st;
	cin >> st;

	vector<int>v(27, 0);

	int mx = 0;
	for (int i = 0; i < n; i++)
		mx = max(mx, st[i] - 'a');

	cout << mx + 1 << '\n';
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
