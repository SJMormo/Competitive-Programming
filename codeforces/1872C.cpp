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
	int l, r;
	cin >> l >> r;
	
	for(int i = l; i <= r; i++) {
		if(~i&1 and i > 2) {
			cout << 2 << ' ' << i - 2 << '\n';
			return;
		}
	}
	for(int i = 2; i * i <= r; i++) {
		int x = r - i;
		if(__gcd(i, x) > 1) {
			cout << i << ' ' << x << '\n';
			return; 
		}
	}
	cout << -1 << '\n';
	
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