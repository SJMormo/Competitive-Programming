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
	int x, y;
	cin >> x >> y;

	if (x - y == 1) {
		cout << 2 << '\n' << x << ' ' << y << '\n';
		return;
	}

	vector<int> ans1, ans2;

	ans1.push_back(x - 1);
	for (int i = x; i >= y; i--) {
		ans1.push_back(i);
	}
	for (int i = y + 1; i < x - 1; i++)
		ans1.push_back(i);

	ans2.push_back(y + 1);
	for (int i = y; i <= x; i++) {
		ans2.push_back(i);
	}
	for (int i = x - 1; i > y + 1; i--)
		ans2.push_back(i);

	if (ans1[0] == ans1[ans1.size() - 1] ) ans1.push_back(ans1[0] - 1);
	if (ans2[0] == ans2[ans2.size() - 1] ) ans2.push_back(ans2[0] + 1);

	if (x < 0 and y < 0) {
		cout << ans2.size() << '\n';
		for (int i = 0; i < ans2.size(); i++)
			cout << ans2[i] << ' ';
	}
	else {
		cout << ans1.size() << '\n';
		for (int i = 0; i < ans1.size(); i++)
			cout << ans1[i] << ' ';
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