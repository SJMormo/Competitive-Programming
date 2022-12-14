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

	char s[n][n], t[n][n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
		cin >> t[i];

	for (int k = 0; k < 4; k++) {
		for (int i = 0; i < n / 2; i++) {
			for (int j = i; j < n - i - 1; j++) {
				char temp = s[i][j];

				s[i][j] = s[j][n - 1 - i];
				s[j][n - 1 - i] = s[n - 1 - i][n - 1 - j];
				s[n - 1 - i][n - 1 - j] = s[n - 1 - j][i];
				s[n - 1 - j][i] = temp;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << s[i][j];
			}
			cout << endl;
		}
		cout << endl << endl;


		bool matched = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (s[i][j] != t[i][j]) {
					matched = false;
				}
			}
		}

		if (matched) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
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
