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

ll to_int(string s)
{
	reverse(s.begin(), s.end());
	ll ans = 1, mul = 1;

	for (ll i = 0; i < s.size(); i++) {
		ll x = s[i] - 48;
		ans += (x * mul);
		mul *= 10;
	}
	return ans;
}

string to_st(ll x)
{
	string s = "";

	while (x) {
		ll m = x % 10;
		char n = m + 48;
		s += n;
		x /= 10;
	}

	reverse(s.begin(), s.end());
	return s;
}

void solve()
{
	string n;
	ll k;
	cin >> n >> k;

	while (k--) {
		string m = n;
		sort(n.begin(), n.end());

		ll z = 4 - m.size();
		for (ll i = 0; i < z; i++)
			m += '0';
		sort(m.begin(), m.end());
		reverse(m.begin(), m.end());

		ll q = to_int(n);
		ll p = to_int(m);

		ll x = p - q;
		if (x == 0) {
			cout << 0 << '\n';
			return;
		}
		string st = to_st(x);
		if (n == st) {
			cout << n << endl;
			return;
		}
		n = st;
		// cout << n << endl;
	}

	cout << n << '\n';
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