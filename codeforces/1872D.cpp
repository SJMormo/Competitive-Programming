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
	ll n, x, y, sum = 0;
	cin >> n >> x >> y;
	
	ll up = n / x;
	
	ll down = n / y;
	ll highest = down * y;
	
	// multiple
	ll lcm = x * y / __gcd(x, y);
	ll common = n / lcm;
	ll non_common = (n / y) - common;
	
	
	sum += n * (n+1) / 2;
	sum -= (n-up+common) * (n-up+common+1) / 2;
	sum -= non_common * (non_common+1) / 2;
	cout << sum << endl;
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