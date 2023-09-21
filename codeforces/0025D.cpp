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

int parent[1001];
int nodeRank[1001];
std::vector<pair<int, int>> extra;

void makeSet()
{
	for(int i = 0; i <= 1001; i++) {
		parent[i] = i;
		nodeRank[i] = 0;
	}
	extra.clear();
}

int findParent(int node)
{
	if(parent[node] == node)
		return node;
	return parent[node] = findParent(parent[node]);
}

void join(int u, int v)
{
	int p = u, q = v;
	u = findParent(u);
	v = findParent(v);
	
	if(u == v) {
		if(u < v)
			extra.push_back({p, q});
		else
			extra.push_back({q, p});
	}
	else if(nodeRank[u] > nodeRank[v]) 
		parent[v] = u;
	else if(nodeRank[u] < nodeRank[v])
		parent[u] = v;
	else {
		parent[v] = u;
		nodeRank[u]++;
	}
}

void solve()
{
	makeSet();
	
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;
		join(u, v);
	}
	
	// select not connecteds
	std::vector<int> ans;
	for(int i = 1; i <= n; i++) {
		if(i == parent[i]) {
			ans.push_back(i);
		}
	}
		
	cout << extra.size() << '\n';
	for(int i = 0; i < extra.size(); i++) {
		cout << extra[i].first << ' ' << extra[i].second << ' ';
		cout << ans[i] << ' ' << ans[i+1] << '\n';
	}
}
int main()
{
	fastio();

	int t = 1;
	// cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}