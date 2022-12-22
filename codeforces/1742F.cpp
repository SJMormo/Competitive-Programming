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
	string s = "a";
	string t = "a";

	ll q;
	cin >> q;

	ll s_size = 1, t_size = 1;
	bool indi1 = false;
	bool indi2 = false;

	for (ll i = 0; i < q; i++) {
		ll type, times;
		string add;


		cin >> type >> times >> add;

		sort(add.begin(), add.end());
		reverse(add.begin(), add.end());

		if (type == 1) {
			s_size += add.size() * times;
			if (add[0] != 'a')
				indi1 = true;
		}
		else {

			if (add[0] != 'a')
				indi2 = true;
			t_size += add.size() * times;
		}
		// cout << indi1 << ' ' << indi2 << endl;
		if (indi2 == true) {
			cout << "YES\n";
		}
		else if (indi1 == false && s_size < t_size) {
			cout << "YES\n";
		}
		else cout << "NO\n";

	}
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
