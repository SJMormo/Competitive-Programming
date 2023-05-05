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
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (auto &it : v) cin >> it;

	vector<int> s = v;
	set<int> sp;
	sort(s.begin(), s.end());
	// for (auto it : s) cout << it << ' ';
	for (int i = 0; i < k; i++) {
		set<int> one, two;
		for (int j = i; j < n; j += k) {
			one.insert(v[j]);
			two.insert(s[j]);
		}

		if (one == two) continue;
		else {
			for (auto it : two) {
				if (one.find(it) == one.end())
					sp.insert(it);
			}
		}
	}

	if (sp.size() == 0) cout << 0;
	else if (sp.size() == 2) cout << 1;
	else cout << -1;
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