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
	int n; cin >> n;

	std::map<string, int> mp;
	mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e6;
	int ans = 1e6;

	while (n--) {
		int x;
		string st;
		cin >> x >> st;

		mp[st] = min(mp[st], x);
		ans = min(mp["11"], mp["01"] + mp["10"]);
	}

	cout << (ans == 1e6 ? -1 : ans) << '\n';
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