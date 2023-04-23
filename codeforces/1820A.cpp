#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	// ^_^_^_^_^^^_^_^_^_^

	string st;
	cin >> st;

	string temp = "";

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == '_' and temp.empty()) {
			temp.push_back('^');
			temp.push_back('_');
			if (i == st.size() - 1 or st[i + 1] != '^')
				temp.push_back('^');
		}
		else if (st[i] == '_') {
			temp.push_back('_');
			if (i == st.size() - 1 or st[i + 1] != '^')
				temp.push_back('^');
		}
		else {
			temp.push_back('^');
		}
	}

	if (temp == "^") {
		cout << 1 << '\n';
		return;
	}

	cout << temp.size() - st.size() << endl;
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