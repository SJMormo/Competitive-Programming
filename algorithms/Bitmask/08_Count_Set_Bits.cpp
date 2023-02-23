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

	int n = 11;

	int cnt = 0;
	while (n != 0) {
		if ((n & 1) == 1) cnt++;
		n >>= 1;
	}
	cout << cnt << endl;

	// A better approach: Clear the last set bit
	cnt = 0;
	n = 11;
	while (n != 0) {
		n &= (n - 1);
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}