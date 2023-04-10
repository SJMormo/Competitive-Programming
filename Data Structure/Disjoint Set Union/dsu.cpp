#include<bits/stdc++.h>
using namespace std;

#define N 100000

int parent[N];
int nodeRank[N];

void makeSet(int n)
{
	for (int i = 0; i < n; ++i) {
		nodeRank[i] = 0;
		parent[i] = i;
	}
}

int findParent(int node)
{
	if (parent[node] == node)
		return node;
	return parent[node] = findParent(parent[node]);
}

void join(int u, int v)
{
	u = findParent(u);
	v = findParent(v);

	if (nodeRank[u] > nodeRank[v])
		parent[v] = u;
	else if (nodeRank[v] > nodeRank[u])
		parent[u] = v;
	else  {
		parent[v] = u;
		nodeRank[u]++;
	}
}

int main()
{
	int n;
	cin >> n;
	makeSet(n);

	int m;
	cin >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		join(u, v);
	}

	// Same component or not
	// 1 & 4 (Different)
	if (findParent(1) != findParent(4)) cout << "Different\n";
	else cout << "Same\n";

	// 3 & 5 (Same)
	if (findParent(3) != findParent(5)) cout << "Different\n";
	else cout << "Same\n";

	return 0;
}