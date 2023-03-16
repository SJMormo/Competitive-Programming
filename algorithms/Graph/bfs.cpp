#include <bits/stdc++.h>
using namespace std;

vector<int> graph[200001];
vector<int> visited(200001);

void bfs(int start)
{
	queue<int> Q;
	Q.push(start);
	visited[start] = 1;

	while (!Q.empty()) {
		int u = Q.front();
		for (int i = 0; i < graph[u].size(); i++) {
			int v = graph[u][i];
			if (!visited[v]) {
				visited[v] = 1;
				Q.push(v);
			}
		}
		Q.pop();
	}
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

	bfs(1);

	return 0;
}