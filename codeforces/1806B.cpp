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

	vector <int> cnt(200001, 0);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}

	for (int i = 0; i < 200001; i++) {
		if (cnt[i] == 0) {
			cout << i << '\n';
			return;
		}
		int baki = n - cnt[i];
		if (baki + 1 >= cnt[i]) {
			cout << i << '\n';
			return;
		}
	}

	cout << "200001\n";
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