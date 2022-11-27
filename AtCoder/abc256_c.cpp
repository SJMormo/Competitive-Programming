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
	int h1, h2, h3, w1, w2, w3;
	int ans = 0;
	cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
	for (int i = 1; i <= 30; ++i) {
		for (int j = 1; j <= 30; ++j) {
			int x = h1 - i - j;
			if (x <= 0)
				break;
			for (int k = 1; k <= 30; ++k) {
				for (int l = 1; l <= 30; ++l) {
					int y = h2 - k - l;
					int m = w1 - i - k;
					int n = w2 - j - l;
					int o = w3 - x - y;
					if (y <= 0)
						break;
					if (m + n + o != h3)
						continue;
					if (m <= 0 || n <= 0 || o <= 0)
						continue;
					++ans;
				}
			}
		}
	}
	cout << ans << '\n';
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
