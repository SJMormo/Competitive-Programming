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

int main()
{
	fastio();

	int n = 12;
	int ans = n & (n - 1);
	cout << ans << '\n';

	// because the bit got set from n-1 to n will be cleard in n-1!!!

	return 0;
}