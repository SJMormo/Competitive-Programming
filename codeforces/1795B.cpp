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
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		if (y >= k and x <= k) {
			v.push_back({x, y});
		}
	}
	if (v.size() == 0) {
		cout << "NO\n";
		return;
	}


	vector<int> cnt(52, 0);
	for (int i = 1; i <= 50; i++) {
		for (int j = 0; j < v.size(); j++) {
			if (i >= v[j].first and i <= v[j].second)
				cnt[i]++;
		}
	}

	int ref = cnt[k];
	for (int i = 1; i <= 50; i++) {
		if (i == k) continue;

		if (cnt[i] >= ref) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
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