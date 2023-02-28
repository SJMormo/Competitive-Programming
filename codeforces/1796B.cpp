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
	string a, b;
	cin >> a >> b;

	if (a == b) {
		cout << "YES\n" << a << '\n';
	}

	else if (a[0] == b[0]) {
		cout << "YES\n" << a[0] << "*\n";
	}
	else if (a[a.size() - 1] == b[b.size() - 1]) {
		cout << "YES\n" << "*" << a[a.size() - 1] << "\n";
	}
	else {
		for (int i = 1; i < a.size(); i++) {
			for (int j = 1; j < b.size(); j++) {
				if (a[i - 1] == b[j - 1] and a[i] == b[j]) {
					// cout << i << ' ' << j << endl;
					cout << "YES\n" << "*" << a[i - 1] << a[i] << "*\n";
					return;
				}
			}
		}

		cout << "NO\n";
	}
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