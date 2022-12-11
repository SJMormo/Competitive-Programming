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

	vector<int>v(n);
	for (int i = 0 ; i < n; i++)
		cin >> v[i];

	int x = v[0], res = 0;
	vector<int> track(n + 1, 0);
	for (int i = 0; i < n; i++) {
		int a = x % n;
		v[i] -= a;
		if (v[i] < 0) {
			v[i] = n - abs(v[i]);
		}
		x++;

		track[v[i] % n]++;
		track[(v[i] + 1) % n]++;
		track[(v[i] - 1 + n) % n]++;
	}

	for (int i = 0 ; i < n; i++)
		res = max(res, track[i]);
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
