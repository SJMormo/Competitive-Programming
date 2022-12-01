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

	int ans = 0;
	for (int a = 1; a <= 1e6; a++) {
		for (int b = 1; ; b++) {
			if (a * b >= n)
				break;
			++ans;
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
