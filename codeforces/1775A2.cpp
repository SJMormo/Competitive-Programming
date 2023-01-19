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
	string st;
	cin >> st;

	int n = st.size();

	for (int i = 1; i < n - 1; i++) {
		if (st[i] == 'a') {
			cout << st.substr(0, i) << ' ' << st[i] << ' ' << st.substr(i + 1, n - 1) << '\n';
			return;
		}
	}
	cout << st[0] << ' ' << st.substr(1, n - 2) << ' ' << st[n - 1] << '\n';

	// if (n == 3 && st[0] == st[1] && st[1] == st[2]) {
	// 	cout << st[0] << ' ' << st[1] << ' ' << st[2] << '\n';
	// 	return;
	// }

	// // 1st
	// if ((st[1] > st[0] || (n - 2) > 1) && (st[1] > st[n - 1] || (n - 2) > 1)) {
	// 	cout << st[0] << ' ';
	// 	for (int i = 1; i < n - 1; i++)
	// 		cout << st[i];
	// 	cout << ' ' << st[n - 1] << '\n';
	// 	return;
	// }

	// int indi = -1;
	// for (int i = 1; i < n - 1; i++) {
	// 	if ((st[i] < st[0] || i > 1) && (st[i] < st[i + 1] || (n - i - 1) > 1)) {
	// 		indi = i;
	// 	}
	// }

	// if (indi == -1)
	// 	cout << ":(";
	// else {
	// 	for (int i = 0; i < indi; i++)
	// 		cout << st[i];
	// 	cout << ' ' << st[indi] << ' ';
	// 	for (int i = indi + 1; i < n; i++)
	// 		cout << st[i];
	// }
	// cout << '\n';
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
