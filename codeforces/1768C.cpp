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

	set<ll> s1, s2;
	for (ll i = 0; i < n; i++) {
		s1.insert(i + 1);
	}
	s2 = s1;

	vector<ll> v(n), ans1(n, -1), ans2(n, -1), track1(n + 1, 0), track2(n + 1, 0);
	bool no = false;

	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (track1[v[i]] == 0) {
			ans1[i] = v[i];
			track1[v[i]] = 1;
			s1.erase(v[i]);
		}
		else if (track1[v[i]] == 1 && track2[v[i]] == 0) {
			ans2[i] = v[i];
			track2[v[i]] = 1;
			s2.erase(v[i]);
		}
		else no = true;
	}


	for (ll i = 0; i < n; i++) {
		if (ans1[i] != -1) {
			auto it = s2.lower_bound(ans1[i]);
			if (it == s2.end() || (*it > v[i]))
				it--;
			if (*it > ans1[i])
				no = true;
			ans2[i] = *it;
			s2.erase(*it);
		}
		else if (ans2[i] != -1) {
			auto it = s1.lower_bound(ans2[i]);
			if (it == s1.end() || (*it > v[i]))
				it--;
			if (*it > ans2[i])
				no = true;
			ans1[i] = *it;
			s1.erase(*it);
		}
		else no = true;
	}

	if (!s1.empty() || !s2.empty()) no = true;
	if (no) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	for (ll i = 0; i < n; i++)
		cout << ans1[i] << ' ';
	cout << '\n';
	for (ll i = 0; i < n; i++)
		cout << ans2[i] << ' ';
	cout << '\n';
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