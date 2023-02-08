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

vector<ll> primeFactorsList;

void primeFactors(ll n)
{
	while (n % 2 == 0) {
		primeFactorsList.push_back(2);
		n /= 2;
	}

	for (ll i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			primeFactorsList.push_back(i);
			n /= i;
		}
	}

	if (n > 2)
		primeFactorsList.push_back(n);
}

void solve()
{
	primeFactorsList.clear();

	ll n;
	cin >> n;

	primeFactors(n);

	ll ans = 0;
	reverse(primeFactorsList.begin(), primeFactorsList.end());

	// for (auto it : primeFactorsList)
	// 	cout << it << ' ';
	// cout << endl;

	for (ll i = 0; i < primeFactorsList.size(); i++) {
		ll curr = primeFactorsList[i];
		if (primeFactorsList[i] == -1) continue;

		std::map<ll, bool> mp;
		mp[primeFactorsList[i]] = 1;
		for (ll j = i + 1; j < primeFactorsList.size(); j++) {
			if (mp[primeFactorsList[j]] == 1 || primeFactorsList[j] == -1) continue;

			curr *= primeFactorsList[j];
			mp[primeFactorsList[j]] = 1;
			primeFactorsList[j] = -1;
		}
		ans += curr;
		// cout << ans << endl;
		// for (auto it : primeFactorsList)
		// 	cout << it << ' ';
		// cout << endl << endl;
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