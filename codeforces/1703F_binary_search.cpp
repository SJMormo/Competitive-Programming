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

	vector<ll>arr(n + 1);
	for (int i = 1; i <= n; i++) cin >> arr[i];

	vector<ll>v;
	ll res = 0;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] >= i)
			continue;
		res += lower_bound(v.begin(), v.end(), arr[i]) - v.begin(); // count of i < a[j]. very nice :')
		v.push_back(i);
	}

	cout << res << '\n';
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
