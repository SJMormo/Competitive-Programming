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
	std::vector<pair<ll, ll>> track;
	ll ans = 0;
	
	ll n;
	cin >> n;
	
	while(n--) {
		ll m;
		cin >> m;
		
		std::vector<ll> v(m);
		for(ll i = 0; i < m; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		if(m == 1)
			ans += v[0];
		else {
			track.push_back({v[1], v[0]});
		}
	}
	
	sort(track.rbegin(), track.rend());
	ll mn = 1000000000;
	for(ll i = 0; i < track.size() - 1; i++) {
		ans += track[i].first;
		mn = min(mn, track[i].second);
	}
	
	ans += min(mn, track[track.size()-1].second);
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