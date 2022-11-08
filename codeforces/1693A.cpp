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
}


void solve()
{
	int n;
	cin >> n;

	vector<ll>match(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		match[i] += match[i - 1] + x;
	}

	bool no = false, zero = false;
	for (int i = 1; i <= n; i++) {
		if (match[i] < 0)
			no = true;
		else if (match[i] == 0)
			zero = true;

		if (zero && match[i] != 0)
			no = true;
	}

	if (!zero)
		no = true;

	no ? cout << "No\n" : cout << "Yes\n";
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
