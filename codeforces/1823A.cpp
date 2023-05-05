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

	set<int> st;

	for (int i = n; i >= 0; i--) {
		int one = i * (i - 1) / 2;
		int two = n - i;
		two = two * (two - 1) / 2;

		if (one + two == k) {
			cout << "YES\n";
			for (int j = 0; j < i; j++) cout << 1 << ' ';
			for (int j = 0; j < n - i; j++) cout << -1 << ' ';
			cout << '\n';
			return;
		}
	}

	cout << "NO\n";
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