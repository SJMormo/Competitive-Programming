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

	vector<int> v(n);

	cin >> v[0];
	if (v[0] == 1) v[0]++;
	for (int i = 1; i < n; i++) {
		cin >> v[i];

		if (v[i] == 1) v[i]++;

		if (v[i] % v[i - 1] == 0)
			v[i]++;
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << ' ';
	cout << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}