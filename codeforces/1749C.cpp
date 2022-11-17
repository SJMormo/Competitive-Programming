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

	multiset<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		v.insert(x);
	}

	for (int k = 1; ; k++)
	{
		multiset <int> temp;
		temp = v;

		for (int i = k; i > 0; i--)
		{
			auto it = temp.upper_bound(i);
			if (it == temp.begin())
			{
				cout << k - 1 << '\n';
				return;
			}
			it--;
			temp.erase(it);

			if (temp.size() == 0)
				continue;
			it = temp.begin();
			int x = *it + k;
			temp.erase(it);
			temp.insert(x);
		}
	}
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
