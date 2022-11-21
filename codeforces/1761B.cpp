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
	vector<int>v(n + 1, 0);
	int distinct = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (v[x] == 0)
			++distinct;
		v[x] = 1;
	}
	if (distinct >= 3)
		cout << n;
	else
		cout << n / 2 + 1;
	cout << '\n';
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
