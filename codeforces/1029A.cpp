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

#define sz(a) int((a).size())

void solve()
{
	int n, k;
	string t;
	cin >> n >> k >> t;

	// selecting what to add everytime
	int final_len = 0;
	for (int pos = 1; pos < n; pos++)
	{
		bool ok = true;
		int len = 0;
		for (int j = 0; j < t.size(); j++)
		{
			if (j + pos >= t.size())
				break;
			else if (t[j] != t[j + pos])
			{
				ok = false;
				break;
			}
			len++;
		}

		if (ok)
		{
			// cout << "ok " << len << endl;
			final_len = len;
			break;
		}
	}

	// cout << final_len << endl;
	cout << t;
	for (int i = 0; i < k - 1; i++)
		cout << t.substr(final_len);
	cout << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	while (t--)
		solve();

	return 0;
}
