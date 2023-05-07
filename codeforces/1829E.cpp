#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}


int v[1001][1001];
bool vis[1001][1001];
int n, m;
int cnt;

void dfs(int i, int j)
{
	if (i < 0 or i >= n or j < 0 or j >= m or v[i][j] == 0 or vis[i][j])
		return;
	vis[i][j] = true;
	cnt += v[i][j];

	dfs(i + 1, j);
	dfs(i - 1, j);
	dfs(i, j + 1);
	dfs(i, j - 1);
}

void solve()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			vis[i][j] = 0;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cnt = 0;
			dfs(i, j);
			ans = max(ans, cnt);
		}
	}

	cout << ans << '\n';

}
int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}