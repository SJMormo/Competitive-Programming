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

int mod = 998244353;

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int ans = n / 3 * (n / 3 - 1);
	cout << ans << endl;
	for (int i = 0; i < n; i += 3) {
		vector<int> track;
		for (int j = i; j < i + 3; j++) {
			track.push_back(v[j]);
		}
		sort(track.begin(), track.end());
		if (track[0] == track[1] and track[1] == track[2]) ans *= 3;
		else if (track[0] == track[1]) ans *= 2;
	}

	// ans /= 2;
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}