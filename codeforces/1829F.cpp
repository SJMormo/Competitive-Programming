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
	ll n, m;
	cin >> n >> m;

	map<int, int> mp;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		mp[x]++;
		mp[y]++;
	}

	std::map<int, int> cnt;
	for (auto it : mp) {
		cout << it.first << ' ' << it.second << endl;
		if (it.second > 1) {
			cnt[it.second]++;
		}
	}

	int one, two;
	for (auto it : cnt) {
		if (it.second == 1) one = it.first;
		else two = it.first - 1;
	}

	cout << one << ' ' << two << '\n';
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