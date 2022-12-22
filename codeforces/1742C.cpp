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
	char arr[8][8];
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < 8; i++) {
		int cnt = 0;
		for (int j = 0; j < 8; j++) {
			if (arr[i][j] == 'R')
				cnt++;
		}
		if (cnt == 8) {
			cout << "R\n";
			return;
		}
	}

	for (int i = 0; i < 8; i++) {
		int cnt = 0;
		for (int j = 0; j < 8; j++) {
			if (arr[j][i] == 'B')
				cnt++;
		}
		if (cnt == 8) {
			cout << "B\n";
			return;
		}
	}
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
