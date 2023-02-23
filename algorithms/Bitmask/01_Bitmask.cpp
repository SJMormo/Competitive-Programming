#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll setbit(ll num, ll pos) {return num |= (1ll << pos);}
ll checkbit(ll num, ll pos) {return (num >> pos) & 1ll;}
ll clearbit(ll num, ll pos) {return num &= ~(1ll << pos);}
ll togglebit(ll num, ll pos) {return num ^= (1ll << pos);}
ll changebit(ll num, ll pos, ll val) {return num ^= (-val ^ num) & (1ll << pos);}

int main()
{
	return 0;
}
