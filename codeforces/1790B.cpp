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
	int n, s, r;
	cin >> n >> s >> r;

	int mx = s - r;

	int vag = r / (n - 1);
	int rem = r % (n - 1);

	for (int i = 0; i < n - 1; i++) {
		if (rem) {
			cout << vag + 1 << ' ';
			rem--;
		}
		else cout << vag << ' ';
	}
	cout << mx << '\n';
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