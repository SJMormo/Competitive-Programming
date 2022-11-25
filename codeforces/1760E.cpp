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

ll ans_calc(vector<int>v, int n)
{
	ll zero = 0, ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] == 1) ans += zero;
		else zero++;
	}
	return ans;
}

void solve()
{
	int n;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans1 = 0, ans2 = 0, ans3 = 0;
	ans1 = ans_calc(v, n);

	vector<int>temp = v;
	for (int i = 0; i < n; i++)
		if (v[i] == 0) {
			v[i] = 1;
			break;
		}

	ans2 = ans_calc(v, n);

	for (int i = n - 1; i >= 0; i--)
		if (temp[i] == 1) {
			temp[i] = 0;
			break;
		}

	ans3 = ans_calc(temp, n);

	cout << max(ans1, max(ans2, ans3)) << '\n';
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
