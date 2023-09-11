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
	int n;
	cin >> n;
	
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}
	
	int ans = INT_MAX;
	for(int i = 0; i < n; i++) {
		int res;
		if(v[i].second & 1)
			res = v[i].first + v[i].second / 2;
		else
			res = v[i].first + (v[i].second / 2) - 1;
		ans = min(ans, res);
	}
	cout << ans << '\n';
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