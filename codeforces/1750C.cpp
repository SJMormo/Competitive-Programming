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

	string a, b;
	cin >> a >> b;

	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			ok = false;
		}
	}
	ok = ok || (a == b);

	if (!ok) {
		cout << "No\n";
		return;
	}

	vector<pair<int, int>> ans;
	if (a != b) {
		ans.push_back({1, n});
		a = b;
	}

	vector<int> cnt(n + 1, 0);
	for (int i = 0; i < n; i++) {
		if (a[i] == '1') {
			if (i == 0) {
				ans.push_back({1, n});
				ans.push_back({2, n});
			}
			else {
				cnt[i + 1]++;
				cnt[i]++;
			}
		}
	}
	for (int i = 1; i < n; ++i)
	{
		if (cnt[i] % 2 == 1)
		{
			ans.push_back({1, i + 1});
		}
	}
	cout << "Yes\n" << ans.size() << '\n';
	for (auto it : ans)
		cout << it.first << ' ' << it.second << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}

// 15
// 1 7
// 1 7
// 2 7
// 1 2
// 1 1
// 1 3
// 1 2
// 1 4
// 1 3
// 1 5
// 1 4
// 1 6
// 1 5
// 1 7
// 1 6
