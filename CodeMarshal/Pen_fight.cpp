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

int nodeRank[100001];
int parent[100001];

void makeSet(int n)
{
	for (int i = 0; i <= n; i++) {
		nodeRank[i] = 1;
		parent[i] = i;
	}
}

int findParent(int node)
{
	if (parent[node] == node) {
		return node;
	}
	return parent[node] = findParent(parent[node]);
}

void join(int u, int v)
{
	u = findParent(u);
	v = findParent(v);

	parent[v] = u, nodeRank[u]++;
}

void solve()
{
	int n;
	cin >> n;
	makeSet(n);

	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];

	int q;
	cin >> q;

	while (q--) {
		int type;
		cin >> type;
		if (type == 1) {
			int x, y;
			cin >> x >> y;
			// Dsu join
			if (min(v[x], v[y]) == 0) {
				continue;
			}
			if (v[x] > v[y]) {
				v[x] += v[y];
				v[y] = 0;
				join(x, y);
			}
			else if (v[y] > v[x]) {
				v[y] += v[x];
				v[x] = 0;
				join(y, x);
			}
		}
		else if (type == 2) {
			int x;
			cin >> x;
			// print rank
			cout << nodeRank[x] << '\n';
		}
		else {
			int x;
			cin >> x;
			// print parent
			cout << findParent(x) << '\n';
		}
	}
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