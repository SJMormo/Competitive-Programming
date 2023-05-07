#include <bits/stdc++.h>
using namespace std;

vector<int> graph[200001];
vector<int> visited(200001);

void dfs(int v)
{

	visited[v] = 1;

	for (int u : graph[v])
		if (!visited[u])
			dfs(u);
}

int main()
{
	int n, m, a, b; // n = node; m = edge
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a); // FOR UNDIRECTED GRAPH
	}

	dfs(1);

	return 0;
}