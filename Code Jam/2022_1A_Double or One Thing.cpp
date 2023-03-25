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

	string ans = "";
	for (int i = 0; i < st.size(); i++) {
		bool indi = false;
		for (int j = i + 1; j < st.size(); j++) {
			if (st[i] < st[j]) {
				ans += st[i];
				ans += st[i];
				indi = false;
				break;
			}
			else if (st[i] > st[j]) {
				ans += st[i];
				indi = false;
				break;
			}
			else if (st[i] == st[j]) {
				indi = true;
			}
		}
		if (indi) ans += st[i];
	}
	ans += *st.rbegin();

	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}