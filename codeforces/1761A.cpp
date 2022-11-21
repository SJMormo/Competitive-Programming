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
	int n, a, b;
	cin >> n >> a >> b;

	if (n == a && n == b)
		cout << "Yes\n";
	else if (n > a + b + 1)
		cout << "Yes\n";
	else cout << "No\n";
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
