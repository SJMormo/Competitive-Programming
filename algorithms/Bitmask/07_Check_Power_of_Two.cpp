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

	int n = 16;
	int check = n & (n - 1);
	if (check == 0) cout << "YES\n";
	else cout << "NO\n";

	// 16 = 1 0000
	// 15 =   1111
	//  & = 0 0000

	// 12 = 1100
	// 11 = 1011
	//  & = 1000

	return 0;
}