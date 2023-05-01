#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> calc;

	vector<int> v(n), e(n);
	for (int i = 0; i < n; i++) cin >> v[i], v[i] += i;
	for (int i = 0; i < n; i++) cin >> e[i];

	for (int i = 0; i < n; i++) {
		if (v[i] <= k) {
			calc.push_back({e[i], v[i]});
		}
	}


	if (calc.empty()) {
		cout << -1 << '\n';
		return;
	}
	sort(calc.begin(), calc.end());
	reverse(calc.begin(), calc.end());

	// for (auto it : calc)
	// 	cout << it.first << ' ' << it.second << endl;
	for (int i = 0; i < n; i++) {
		if (v[i] == calc[0].second and e[i] == calc[0].first) {
			cout << i + 1 << '\n';
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

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}