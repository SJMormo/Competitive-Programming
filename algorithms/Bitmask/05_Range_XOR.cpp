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

int XOR_TO_N(int n)
{
	if (n % 4 == 0) return n;
	else if (n % 4 == 3) return 0;
	else if (n % 4 == 2) return n + 1;
	else if (n % 4 == 1) return 1;

	return 1;
}

int main()
{
	fastio();

	int l, r;
	cin >> l >> r;

	int ans = XOR_TO_N(r) xor XOR_TO_N(l - 1);
	cout << ans << '\n';

	// 5 9 = 5 ^ 6 ^ 7 ^ 8 ^ 9
	// 	   = 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 7 ^ 8 ^ 9 ^ 1 ^ 2 ^ 3 ^ 4;

	return 0;
}