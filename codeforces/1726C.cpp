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

	char st[2 * n];
	cin >> st;

	stack <int> stk;
	int track[n + 2];
	for (int i = 0; i < n + 2; i++)
		track[i] = 0;
	int res = 0;

	for (int i = 0; i < 2 * n; i++)
	{
		if (st[i] == '(')
			stk.push(st[i]);
		else
		{
			int l = stk.size();
			track[l]++;
			stk.pop();

			if (track[l + 1])
				res++;
			track[l + 1] = 0;
		}
	}

	if (track[1])
		res++;
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
