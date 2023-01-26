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
	int arr[2][2];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];

	for (int i = 0; i <= 4; i++) {
		int temp = arr[0][0];
		arr[0][0] = arr[1][0];
		arr[1][0] = arr[1][1];
		arr[1][1] = arr[0][1];
		arr[0][1] = temp;

		if (arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0] && arr[1][0] < arr[1][1] && arr[0][1] < arr[1][1]) {
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