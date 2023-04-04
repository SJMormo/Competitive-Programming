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
	ll n, x, y, a, b;
	cin >> n >> x >> y >> a >> b;

	ll row_type1 = min(x, n - x + 1);
	ll row_type2 = min(a, n - a + 1);


	ll col_type1 = min(y, n - y + 1);
	ll col_type2 = min(b, n - b + 1);

	// ll ans = min(abs(row_type2 - row_type1), abs(col_type1 - col_type2));
	// cout << ans << '\n';

	// cout << row_type1 << ' ' << col_type1 << endl;
	// cout << row_type2 << ' ' << col_type2 << endl << endl;

	ll type1 = min(row_type1, col_type1);
	ll type2 = min(row_type2, col_type2);

	cout << abs(type1 - type2) << '\n';
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