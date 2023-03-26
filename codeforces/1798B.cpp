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
	int m;
	cin >> m;

	vector<int> v[m];
	vector<int> cnt(50001, 0);
	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
			cnt[x]++;
		}
	}

	vector<int> ans;
	for (int i = 0; i < m; i++) {
		bool indi = true;
		for (int j = 0; j < v[i].size(); j++) {
			// cout << cnt[v[i][j]] << ' ';
			if (cnt[v[i][j]] == 1 and indi) {
				ans.push_back(v[i][j]);
				indi = false;
			}
			cnt[v[i][j]]--;
		}
		// cout << endl;
	}

	if (ans.size() != m) cout << "-1";
	else
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << ' ';
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