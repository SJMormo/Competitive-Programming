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
	// turn off fastio
	// take int input using scanf with a space

	string st;
	getline(cin, st);
	cout << st << endl;
}

int main()
{
	// fastio();

	int t = 1;
	scanf("%d ", &t);

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}