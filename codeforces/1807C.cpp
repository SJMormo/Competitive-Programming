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
	string s;
	cin >> n >> s;

	// 01
	vector <char> zero;
	vector <char> one;

	string temp = s;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < zero.size(); j++) {
			if (zero[j] == temp[i])
				temp[i] = '0';
		}

		for (int j = 0; j < one.size(); j++) {
			if (one[j] == temp[i])
				temp[i] = '1';
		}

		if (temp[i] != '0' and temp[i] != '1') {
			if (i & 1) {
				one.push_back(temp[i]);
				temp[i] = '1';
			}
			else {
				zero.push_back(temp[i]);
				temp[i] = '0';
			}
		}
	}

	bool indi1 = true;
	for (int i = 1; i < n; i++) {
		if (temp[i] == temp[i - 1]) {
			indi1 = false;
			break;
		}
	}

	if (indi1) {
		cout << "YES\n";
		return;
	}




// 10
	zero.clear();
	one.clear();

	temp = s;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < zero.size(); j++) {
			if (zero[j] == temp[i])
				temp[i] = '0';
		}

		for (int j = 0; j < one.size(); j++) {
			if (one[j] == temp[i])
				temp[i] = '1';
		}

		if (temp[i] != '0' and temp[i] != '1') {
			if (i & 1) {
				zero.push_back(temp[i]);
				temp[i] = '0';
			}
			else {
				one.push_back(temp[i]);
				temp[i] = '1';
			}
		}
	}

	indi1 = true;
	for (int i = 1; i < n; i++) {
		if (temp[i] == temp[i - 1]) {
			indi1 = false;
			break;
		}
	}

	if (indi1) {
		cout << "YES\n";
	}
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