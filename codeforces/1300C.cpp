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

ll checkbit(ll num, ll pos) {return num & (1ll << pos);}
ll setbit(ll num, ll pos) {return num |= (1ll << pos);}
ll clearbit(ll num, ll pos) {return num &= ~(1ll << pos);}
ll togglebit(ll num, ll pos) {return num ^= (1ll << pos);}
ll changebit(ll num, ll pos, ll val) {return num ^= (-val ^ num) & (1ll << pos);}

void solve()
{
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (auto &it : v)
		cin >> it;

	ll pos = -1;
	for (ll i = 32; i >= 0; i--) {
		set<ll> st;
		for (ll j = 0; j < n; j++) {
			if (checkbit(v[j], i))
				st.insert(j);
		}

		if (st.size() == 1) {
			pos = *st.begin();
			break;
		}
	}

	if (pos == -1) {
		for (auto it : v)
			cout << it << ' ';
	}
	else {
		cout << v[pos] << ' ';
		for (ll i = 0; i < n; i++) {
			if (i != pos)
				cout << v[i] << ' ';
		}
	}
	cout << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}