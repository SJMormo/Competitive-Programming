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

void solve()
{
	string st;
	cin >> st;

	ll n = st.size();

	ll first_zero = -1;
	ll cnt = 0;
	for (ll i = 0; i < n; i++) {
		if (st[i] == '0') {
			first_zero = i;
			break;
		}
		cnt++;
	}

	if (first_zero == -1) {
		ll ans = n * n * 1ll;
		cout << ans << '\n';
		return;
	}

	ll last_zero = -1;
	for (ll i = n - 1; i >= 0; i--) {
		if (st[i] == '0') {
			last_zero = i;
			break;
		}
		cnt++;
	}
	// cout << cnt << ' ' << last_zero << endl;
	if (first_zero == last_zero) {
		ll ans = (cnt - 1ll) * 2ll;
		if (cnt == 1)
			ans = 1;
		ans = max(ans, 0ll);
		cout << ans << '\n';
		return;
	}

	// longest one

	ll curr = 0;
	for (ll i = first_zero + 1ll; i <= last_zero; i++) {
		if (st[i] == '0') {
			cnt = max(cnt, curr);
			curr = 0;
		}
		else
			curr++;
	}
	// cout << cnt << endl;

	ll ans = (cnt - 1ll) * 2ll;
	ans = max(0ll, ans);

	if (ans == 0ll and cnt > 0ll)
		ans = 1ll;
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