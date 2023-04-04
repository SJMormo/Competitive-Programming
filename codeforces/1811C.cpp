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

	vector<int> v(n - 1);
	for (auto &it : v)
		cin >> it;

	vector<int> ans;
	ans.push_back(v[0]);
	for (int i = 1; i < n - 1; i++) {
		ans.push_back(min(v[i], v[i - 1]));
	}
	ans.push_back(v[n - 2]);

	for (auto it : ans)
		cout << it << ' ';
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