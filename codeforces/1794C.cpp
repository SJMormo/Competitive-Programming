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

	vector<int> v(n);
	multiset <int> ms;
	for (auto &it : v) {
		cin >> it;

		if (ms.empty())
			ms.insert(it);
		else {
			ms.insert(it);
			int sz = ms.size();
			int x = *ms.begin();
			if (x < sz)
				ms.erase(ms.begin());
			// cout << *ms.begin() << endl;
		}
		cout << ms.size() << ' ';
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