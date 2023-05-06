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

	vector<int> one, two, both;

	for (int i = 0; i < n; i++) {
		int m; string st;
		cin >> m >> st;

		if (st == "10") one.push_back(m);
		else if (st == "01") two.push_back(m);
		else if (st == "11") both.push_back(m);
	}


	if (one.size() == 0 and two.size() == 0 and both.size() == 0) {
		cout << -1 << '\n';
		return;
	}
	else if (both.size() == 0 and (one.size() != 0 and two.size() != 0)) {
		sort(one.begin(), one.end());
		sort(two.begin(), two.end());
		cout << one[0] + two[0] << '\n';
	}
	else if (both.size() == 0 and (one.size() == 0 or two.size() == 0)) {
		cout << -1 << '\n';
	}
	else if (one.size() == 0 or two.size() == 0) {
		sort(both.begin(), both.end());
		cout << both[0] << '\n';
	}
	else if (one.size() != 0 and two.size() != 0 and both.size() != 0) {
		sort(one.begin(), one.end());
		sort(two.begin(), two.end());
		sort(both.begin(), both.end());
		cout << min(both[0], one[0] + two[0]) << '\n';
	}
	else cout << -1 << '\n';
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