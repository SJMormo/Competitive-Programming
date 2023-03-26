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

void solve()
{
	int n;
	cin >> n;

	vector<int> v1(n), v2(n);

	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int i = 0; i < n; i++) cin >> v2[i];

	int mx1 = *max_element(v1.begin(), v1.end());
	int mx2 = *max_element(v2.begin(), v2.end());

	if (mx1 == v1[n - 1] and mx2 == v2[n - 1]) {
		cout << "Yes\n";
		return;
	}

	for (int i = 0; i < n - 1; i++) {
		if (v1[i] > v1[n - 1] or v2[i] > v2[n - 1]) {
			swap(v1[i], v2[i]);
		}
	}

	mx1 = *max_element(v1.begin(), v1.end());
	mx2 = *max_element(v2.begin(), v2.end());

	if (mx1 == v1[n - 1] and mx2 == v2[n - 1]) {
		cout << "Yes\n";
		return;
	}
	swap(v1[n - 1], v2[n - 1]);
	for (int i = 0; i < n - 1; i++) {
		if (v1[i] > v1[n - 1] or v2[i] > v2[n - 1]) {
			swap(v1[i], v2[i]);
		}
	}

	mx1 = *max_element(v1.begin(), v1.end());
	mx2 = *max_element(v2.begin(), v2.end());

	if (mx1 == v1[n - 1] and mx2 == v2[n - 1]) {
		cout << "Yes\n";
	}

	else cout << "No\n";
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