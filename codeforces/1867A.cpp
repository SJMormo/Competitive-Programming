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
	std::vector<pair<int, int>> v;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back({x, i});
	}
	
	sort(v.rbegin(), v.rend());
	
	vector<pair<int, int>> ans;
	for(int i = 0; i < n; i++) {
		ans.push_back({v[i].second, i+1});
	}
	sort(ans.begin(), ans.end());
	
	for(int i = 0; i < n; i++) {
		cout << ans[i].second << ' ';
	}
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