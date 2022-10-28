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

	vector<int>arr, pos, neg;
	int zeros = 0;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x > 0)
			pos.emplace_back(x);
		else if (x < 0)
			neg.emplace_back(x);
		else if (arr.size() < 2)
			arr.emplace_back(x);
	}

	if (pos.size() > 2 || neg.size() > 2)
	{
		cout << "NO\n";
		return;
	}

	for (auto i : pos)
		arr.emplace_back(i);
	for (auto i : neg)
		arr.emplace_back(i);

	int m = arr.size();
	for (int i = 0; i < m; i++)
		for (int j = i + 1; j < m; j++)
			for (int k = j + 1; k < m; k++)
			{
				bool no = false;
				int l = arr[i] + arr[j] + arr[k];
				for (int z = 0; z < m; z++)
				{
					if (arr[z] == l)
						no = true;
				}

				if (!no)
				{
					cout << "NO\n";
					return;
				}
			}

	cout << "YES\n";


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
