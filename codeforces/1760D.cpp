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

	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	bool indi = true;
	int indx = n;
	for (int i = 1; i < n; i++) {
		if (v[i] > v[i - 1]) {
			indx = i;
			break;
		}
	}
	for (int i = indx + 1; i < n; i++) {
		if (v[i] < v[i - 1]) {
			indi = false;
		}
	}

	indi ? cout << "YES\n" : cout << "NO\n";
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
