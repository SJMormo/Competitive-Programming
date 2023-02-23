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

	// swap two numbers
	int x = 5, y = 7;

	x = x xor y; // x = 5 ^ 7
	y = x xor y; // y = 5 ^ 7 ^ 7 = 5
	x = x xor y; // x = 5 ^ 7 ^ 5 = 7

	return 0;
}