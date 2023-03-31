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
	vector<int> v(n + 1);

	bool indi = false;
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		// cout << v[i] << ' ';
		if (v[i] <= i) {
			indi = true;
		}
	}

	indi ? cout << "YES\n" : cout << "NO\n";
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