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
	ll n, out, in;
	cin >> n >> out >> in;

	queue<ll> q;
	vector<ll> vec;
	map<ll, ll> cnt;
	ll ans = 0;

	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;

		if (cnt[x]) {
			ans += out;
		}
		else {
			vec.push_back(x);
			cnt[x] = 1;
		}
	}

	// how much to in
	sort(vec.begin(), vec.end());
	// ll total_in = 0;
	// for (ll i = 1; i < vec.size(); i++) {
	// 	total_in += vec[i] - vec[i - 1] - 1;
	// }

	if (vec[0] != 1) {
		// total_in += vec[0] - 1;
		ans += in;
	}
	// cout << total_in << endl;

	// count for each position
	for (ll i = 0; i < vec.size(); i++)
		q.push(vec[i]);
	if (q.front() == 1)
		q.pop();

	cout << ans << endl << endl;

	ll start = 2;
	while (!q.empty()) {
		ll curr = q.front();

		cout << "curr " << curr << ' ' << start << endl;
		if (curr != start) {
			ll to_in = curr - start;
			ll in_cost = in * to_in;

			ll out_cost = q.size() * out;

			cout << "Cost\n";
			cout << in_cost << ' ' << out_cost << endl;

			if (out_cost <= in_cost) {
				ans += out_cost;
				break;
			}
			else {
				ans += in_cost;
				start = curr + 1;
			}
		}
		else
			start++;
		q.pop();
		cout << "Ans " << ans << endl << endl;
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