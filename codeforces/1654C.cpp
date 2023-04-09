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
	ll n, sum = 0;
	cin >> n;

	multiset<ll> v;
	map<ll, ll> mp;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
		v.insert(x);
		mp[x]++;
	}

	if (n == 1) {
		cout << "YES\n";
		return;
	}

	map<ll, ll> mp2;
	multiset<ll> track;
	track.insert(sum);
	mp2[sum]++;
	while (true) {
		ll x = *track.rbegin();
		mp2[x]--;
		if (mp2[x] == 0)
			track.erase(x);

		ll p = x / 2;
		ll q = (x + 1) / 2;
		// cout << track.size() << ' ' << p << '\t' << q << endl;

		if (v.find(p) != v.end()) {
			mp[p]--;
			if (mp[p] == 0)
				v.erase(p);
		}
		else {
			track.insert(p);
			mp2[p]++;
		}
		if (v.find(q) != v.end()) {
			mp[q]--;
			if (mp[q] == 0)
				v.erase(q);
		}
		else {
			track.insert(q);
			mp2[q]++;
		}

		if (track.size() and v.size() and (*track.rbegin() < *v.rbegin()))
			break;
		else if (track.empty())
			break;
	}

	if (v.empty()) cout << "YES\n";
	else cout << "NO\n";
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