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

#define N 10000001

ll sc[N];

void strongly_composite()
{
	// primes
	vector<ll> prime(N + 1, 1); // prime[1] are the primes
	prime[1] = 0;
	for (int i = 2; i <= N; i++)
	{
		if (!prime[i]) continue;

		for (int j = i * i; j <= N; j += i)
		{
			prime[j] = 0;
		}
	}

	for (ll n = 2; n <= N; n++)
	{
		ll cnt_p = 0, cnt_c = 0;
		for (int i = 1; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				if (n / i == i) {
					if (prime[i]) cnt_p++;
					else cnt_c++;
				}
				else {
					if (prime[i]) cnt_p++;
					else cnt_c++;
					if (prime[n / i]) cnt_p++;
					else cnt_c++;
				}
			}
		}
		if (cnt_p <= cnt_c) sc[n] = 1;
	}

}

void solve()
{
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (auto &it : v) cin >> it;

	ll mul = 1;
	for (auto it : v) mul *= it;
}
int main()
{
	fastio();

	strongly_composite();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}