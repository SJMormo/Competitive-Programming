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
	int k;
	string st;
	cin >> k >> st;

	string ref = "";
	for (int i = 1; i < 100; i++) {
		if (i % 3 == 0) ref += 'F';
		if (i % 5 == 0) ref += 'B';
	}

	for (int i = 0; i < 100 - k + 1; i++) {
		bool indi = true;
		for (int j = 0; j < k; j++) {
			if (st[j] != ref[i + j]) {
				indi = false;
			}
		}
		if (indi) {
			cout << "YES\n";
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