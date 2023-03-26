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
	ll n;
	cin >> n;

	map<ll, ll> cnt;

	ll mx_cnt = 0;
	ll ans = 1;
	for (ll i = 1; i <= n; i++) {
		ll a, b;
		cin >> a >> b;
		ll curr_max_cnt = 0;

		for (ll z = 1; z * z <= a; z++)
		{
			if (a % z == 0)
			{
				if (a / z == z) {
					ll x = z * b;
					cnt[x]++;
					curr_max_cnt = max(curr_max_cnt, cnt[x]);
				}
				else {
					ll x = z * b;
					cnt[x]++;
					curr_max_cnt = max(curr_max_cnt, cnt[x]);
					x = a / z;
					x *= b;
					cnt[x]++;
					curr_max_cnt = max(curr_max_cnt, cnt[x]);
				}
			}
		}

		if (curr_max_cnt > mx_cnt) {
			mx_cnt = curr_max_cnt;
		}
		else {
			ans++;
			cnt.clear();

			// map<ll, ll>::iterator itr;
			// cout << "\nThe map cnt is : \n";
			// cout << "\tKEY\tELEMENT\n";
			// for (itr = cnt.begin(); itr != cnt.end(); ++itr) {
			// 	cout << '\t' << itr->first << '\t' << itr->second
			// 	     << '\n';
			// }
			// cout << endl << endl;

			mx_cnt = 1;
			curr_max_cnt = 0;

			for (ll z = 1; z * z <= a; z++)
			{
				if (a % z == 0)
				{
					if (a / z == z) {
						ll x = z * b;
						cnt[x]++;
						curr_max_cnt = max(curr_max_cnt, cnt[x]);
					}
					else {
						ll x = z * b;
						cnt[x]++;
						curr_max_cnt = max(curr_max_cnt, cnt[x]);
						x = a / z;
						x *= b;
						cnt[x]++;
						curr_max_cnt = max(curr_max_cnt, cnt[x]);
					}
				}
			}
		}
		// cout << mx_cnt << ' ' << curr_max_cnt << ' ' << ans << endl;

		// for (auto it : cnt)
		// 	cout << it.first << ' ' << it.second << endl;
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