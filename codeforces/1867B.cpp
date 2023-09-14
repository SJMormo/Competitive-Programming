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
	int n;
	string s;
	cin >> n >> s;	
	
	int l = 0, r = n-1;
	int pr = 0, pr_ = 0;
	while(l < r) {
		if(s[l] == s[r]) pr+=2;
		else pr_++;
		++l, --r;
	}
	
	
	string ans(n+1, '0');
	
	
	for(int i = 0; i <= n; i++) {
		int total = i - pr_;
		if(total < 0)
			continue;
		
		if(~total & 1 and total - pr <= 0)
			ans[i] = '1';
		else if(total & 1 and n & 1 and total - pr <= 1)
			ans[i] = '1';
	}
	cout << ans << '\n';
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