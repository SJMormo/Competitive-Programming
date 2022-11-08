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

	vector<int> track(10, 0);

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		x %= 10;

		track[x]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				int z = i + j + k;
				if (z % 10 == 3 && track[i] && track[j] && track[k])
				{
					--track[i];
					--track[j];
					--track[k];

					if (track[i] >= 0 && track[j] >= 0 && track[k] >= 0)
					{
						cout << "YES\n";
						return;
					}
					++track[i];
					++track[j];
					++track[k];
				}
			}
		}
	}

	cout << "NO\n";
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
