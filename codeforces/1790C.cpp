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
	int n; cin >> n;

	int arr[n][n - 1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			cin >> arr[i][j];
		}
	}

	std::vector<int> v;
	for (int i = 0; i < n; i++) {
		v.push_back(arr[i][0]);
	}
	sort(v.begin(), v.end());
	int indi, first;
	if (v[0] == v[1])
		indi = v[n - 1], first = v[0];
	else indi = v[0], first = v[n - 1];

	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] == indi) {
			cout << first;
			for (int j = 0; j < n - 1; j++) {
				cout << ' ' << arr[i][j];
			}
			break;
		}
	}

	cout << '\n';
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