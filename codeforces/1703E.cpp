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

int mat[101][101];

int rotateMatrix(int N)
{
	int res = 0;
	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {
			int a = mat[i][j] + mat[N - 1 - j][i] + mat[N - 1 - i][N - 1 - j] + mat[j][N - 1 - i];
			res += min(a, 4 - a);
		}
	}
	return res;
}

void solve()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; j++)
		{
			char c;
			cin >> c;
			mat[i][j] = c - '0';
		}
	}

	int res = rotateMatrix(n);
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
