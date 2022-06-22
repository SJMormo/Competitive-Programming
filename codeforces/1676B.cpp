#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
#define INF 1e18

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	int n;
	cin >> n;

	int arr[n];
	int mn = 10000000;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mn = min(mn, arr[i]);
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		arr[i] -= mn;
		sum += arr[i];
	}
	cout << sum << '\n';
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
