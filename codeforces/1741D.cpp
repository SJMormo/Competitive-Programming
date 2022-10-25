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
}

int arr[262145];
int n;

void min_max_sorting(int start, int end)
{
	if (end - start + 1 == 2)
	{
		sort(arr + start, arr + end + 1);
		return;
	}
	else if (end - start + 1 > 2)
	{
		min_max_sorting(start, end / 2);
		min_max_sorting(end / 2 + 1, n);
	}
}


void solve()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	min_max_sorting(1, n);

	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
