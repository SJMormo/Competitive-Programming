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

	vector<int>v(n), temp(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		temp[i] = v[i];
	}
	sort(temp.begin(), temp.end());
	int mx = temp[n - 1];
	int sec = temp[n - 2];

	for (int i = 0 ; i < n; i++) {
		if (v[i] == mx)
			cout << v[i] - sec << ' ';
		else
			cout << v[i] - mx << ' ';
	}
	cout << '\n';
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
