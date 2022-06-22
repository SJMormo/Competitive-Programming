#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
#define INF 1e18

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int cnt[6], track[500005];

void increase_and_check(int indx, int cur)
{
	cnt[indx]++;

	for (int i = indx - 1; i >= 0; i--)
	{
		if (cnt[i] < cnt[indx])
		{
			track[cur] = 1;
			cnt[indx]--;
		}
	}
}

void solve()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (n < 6)
	{
		cout << n << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
		track[i] = 0;
	for (int i = 0; i < 6; i++)
		cnt[i] = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 4)
			increase_and_check(0, i);
		else if (arr[i] == 8)
			increase_and_check(1, i);
		else if (arr[i] == 15)
			increase_and_check(2, i);
		else if (arr[i] == 16)
			increase_and_check(3, i);
		else if (arr[i] == 23)
			increase_and_check(4, i);
		else if (arr[i] == 42)
			increase_and_check(5, i);

		// for (int i = 0; i < 6; i++)
		// 	cout << cnt[i] << ' ';
		// cout << endl;
		// for (int i = 0; i < n; i++)
		// 	cout << track[i] << ' ';
		// cout << endl << endl;
	}

	int res = 0;
	for (int i = 0; i < n; i++)
		if (track[i])
			res++;
	// cout << "res " << res << endl;

	int mn = 500005;
	for (int i = 0; i < 6; i++)
	{
		mn = min(cnt[i], mn);
	}
	// cout << "mn " << mn << endl;

	for (int i = 0; i < 6; i++)
	{
		res += cnt[i] - mn;
	}
	cout << res << '\n';
}

int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	while (t--)
		solve();

	return 0;
}
