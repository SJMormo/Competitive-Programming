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
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	set<int> divisors;
	for (int j = 0; j < n; j++) {
		for (int i = 1; i * i <= v[j]; i++) {
			if (v[j] % i == 0) {
				divisors.insert(i);
				divisors.insert(v[j] / i);
			}
		}
	}
	if (*divisors.begin() == 1)
		divisors.erase(divisors.begin());

	vector<int>track(m + 1, 0);
	for (auto it : divisors) {
		for (int j = it; j <= m; j += it) {
			track[j] = 1;
		}
	}

	int cnt = 0;
	set<int> ans;
	for (int i = 1; i <= m; i++)
		if (track[i] == 0) ++cnt, ans.insert(i);

	cout << cnt << '\n';
	for (auto it : ans)
		cout << it << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	while (t--)
		solve();

	return 0;
}
