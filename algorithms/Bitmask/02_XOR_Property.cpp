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

	// Print the number that occurs one and not twice
	vector<int> v {5, 4, 8, 9, 4, 5, 9};
	int res = 0;

	for (int i = 0; i < v.size(); i++)
		res = res xor v[i];
	cout << res << '\n';

	return 0;
}