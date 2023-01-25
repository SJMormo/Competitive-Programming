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

vector<int> divisors[100001];

void divisor()
{
	for (int i = 1; i <= 100000; i++) {
		for (int j = 1; j * j <= i; j++) {
			if (i % j == 0) {
				divisors[i].push_back(j);
				if (j * j != i) {
					divisors[i].push_back(i / j);
				}
			}
		}
	}
}

void solve()
{
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int l = 0, r = -1, cnt = 0, ans = INT_MAX;
	vector<int> freq(m + 1, 0);

	while (r < n) {
		if (cnt < m) {
			r++;
			if (r == n)
				break;

			for (auto it : divisors[v[r]]) {
				if (it > m) continue;
				freq[it]++;
				if (freq[it] == 1)
					cnt++;
			}
		}
		else {
			ans = min(ans, v[r] - v[l]);

			for (auto it : divisors[v[l]]) {
				if (it > m) continue;
				freq[it]--;
				if (freq[it] == 0)
					cnt--;
			}
			l++;
		}
	}
	if (ans == INT_MAX)
		ans = -1;
	cout << ans << '\n';
}

int main()
{
	fastio();
	divisor();
	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}