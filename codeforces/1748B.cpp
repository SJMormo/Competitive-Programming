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
	int n;
	cin >> n;
	string st;
	cin >> st;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		vector<int>cnt(10, 0);
		int max_count = 0, distinct = 0;
		int last = i + 100;
		for (int j = i; j < min(n, last); j++) {
			if (!cnt[st[j] - '0'])
				distinct++;
			cnt[st[j] - '0']++;
			max_count = max(max_count, cnt[st[j] - '0']);

			if (max_count <= distinct)
				++ans;
		}
	}
	cout << ans << '\n';
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
