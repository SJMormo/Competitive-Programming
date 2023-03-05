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
	int n;
	cin >> n;

	vector<string> v(2 * n - 2);
	for (int i = 0; i < 2 * n - 2; i++) {
		cin >> v[i];
	}

	// remove smalls
	for (int i = 0; i < 2 * n - 2; i++) {
		if (v[i] == "0") continue;
		// cout << v[i] << endl << endl;
		for (int j = 0; j < 2 * n - 2; j++) {
			if (v[j] == "0") continue;
			if (v[j].size() >= v[i].size())
				continue;

			int sz = v[j].size();
			string temp = v[i];

			string one = temp.substr(0, sz);
			// cout << one << endl;

			reverse(temp.begin(), temp.end());
			string two = temp.substr(0, sz);
			reverse(two.begin(), two.end());
			// cout << two << endl;

			if (one == v[j] or two == v[j]) {
				v[j] = "0";
			}
		}
	}

	vector<string> notun;
	for (auto it : v) {
		if (it == "0") continue;
		notun.push_back(it);
	}

	// for (auto it : notun)
	// 	cout << it << ' ';
	// cout << endl;

	for (int i = 0; i < notun.size(); i++) {
		if (notun[i] == "0") continue;
		bool indi = true;
		string temp = notun[i];
		reverse(temp.begin(), temp.end());
		// cout << endl << temp << endl;
		for (int j = i + 1; j < notun.size(); j++) {
			// cout << notun[j] << endl;
			if (notun[j] == temp) {
				notun[j] = "0";
				indi = false;
			}
		}

		if (indi) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";

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