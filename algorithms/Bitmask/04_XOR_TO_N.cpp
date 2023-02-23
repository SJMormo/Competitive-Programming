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

	int n;
	cin >> n;

	if (n % 4 == 0) cout << n;
	else if (n % 4 == 3) cout << 0;
	else if (n % 4 == 2) cout << n + 1;
	else if (n % 4 == 1) cout << 1;

	return 0;
}