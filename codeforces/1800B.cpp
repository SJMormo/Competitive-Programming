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
	int n, k;
	string st;
	cin >> n >> k >> st;

	std::map<char, int> mp;
	for (int i = 0; i < n; i++) {
		mp[st[i]]++;
	}

	st[0] += 'a' - 'A';
	for (char i = 'a'; i <= 'z'; i++) {
		if (k == 0)
			break;

		char upper =  i - ('a' - 'A');
		int check = abs(mp[i] - mp[upper]);
		if (check >= 2) {
			int x = check / 2;
			int mn = min(k, x);

			if (mp[i] > mp[upper]) {
				mp[i] -= mn;
				mp[upper] += mn;
			}
			else {
				mp[i] += mn;
				mp[upper] -= mn;
			}

			k -= mn;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (st[i] >= 'a' and st[i] <= 'z') {
			char upper = st[i] - ('a' - 'A');
			ans += min(mp[st[i]], mp[upper]);
			mp[st[i]] = 0;
			mp[upper] = 0;
		}
		else {
			char upper = st[i] + ('a' - 'A');
			ans += min(mp[st[i]], mp[upper]);
			mp[st[i]] = 0;
			mp[upper] = 0;
		}
		// cout << ans << endl;
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