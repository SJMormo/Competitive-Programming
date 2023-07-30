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
	string arr[8];
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	string ans = "";
	bool flag = false;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (flag and arr[j][i] == '.')
				break;
			if (arr[j][i] != '.') {
				flag = 1;
				ans += arr[j][i];
			}
		}
		if (flag)
			break;
	}
	cout << ans << '\n';
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