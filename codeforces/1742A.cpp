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
	int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	sort(arr, arr + 3);

	if (arr[2] == arr[0] + arr[1])
		cout << "YES\n";
	else cout << "NO\n";
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
