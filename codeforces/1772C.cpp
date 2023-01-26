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
	int k, n;
	cin >> k >> n;

	vector<int> ans;
	vector<int> track(n + 1, 0);

	int i = 1, z = 1;
	while (i <= n) {
		ans.push_back(i);
		track[i] = 1;
		i += z;
		z++;
		k--;
		if (k == 0) break;
	}
	// cout << k << endl;

	while (k > 0) {
		for (int i = n; i > 0; i--) {
			if (track[i] == 0) {
				ans.push_back(i);
				track[i] = 1;
				break;
			}
		}
		k--;
	}

	sort(ans.begin(), ans.end());
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