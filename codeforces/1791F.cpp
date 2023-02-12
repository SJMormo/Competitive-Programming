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

ll sum_of_digits(ll n)
{
	ll sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


void solve()
{
	ll n, q;
	cin >> n >> q;

	set<ll> st;
	vector <ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] > 9)
			st.insert(i);
	}

	while (q--) {
		ll type;
		cin >> type;

		if (type == 1) {
			ll l, r;
			cin >> l >> r;
			--l, --r;

			while (!st.empty()) {
				auto it = st.lower_bound(l);
				ll x = *it;

				if (it == st.end() or x > r) break;

				v[x] = sum_of_digits(v[x]);
				if (v[x] <= 9) st.erase(x);
				l = x + 1;
			}
		}
		else {
			ll x;
			cin >> x;
			cout << v[--x] << '\n';
		}
	}
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