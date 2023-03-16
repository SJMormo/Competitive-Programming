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

vector<int> graph[200001];
vector<int> visited(200001);

vector<int> bfs(int start)
{
	vector<int> similarity;
	queue<int> Q;
	Q.push(start);
	visited[start] = 1;

	while (!Q.empty()) {
		int u = Q.front();
		similarity.push_back(u);
		for (int i = 0; i < graph[u].size(); i++) {
			int v = graph[u][i];
			if (!visited[v]) {
				visited[v] = 1;
				Q.push(v);
			}
		}
		Q.pop();
	}

	return similarity;
}

void solve()
{
	int n, k;
	string s, t;
	cin >> n >> k >> s >> t;

	for (int i = 0; i < n; i++)
		graph[i].clear(), visited[i] = 0;


	for (int i = 0; i < n; i++) {
		if (i + k < n) {
			graph[i].push_back(i + k);
			graph[i + k].push_back(i);
		}
		if (i + k + 1 < n) {
			graph[i].push_back(i + k + 1);
			graph[i + k + 1].push_back(i);
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << i << ": ";
	// 	for (int j = 0; j < graph[i].size(); j++) {
	// 		cout << graph[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }


	for (int i = 0; i < n; i++) {
		if (visited[i] == 0) {
			vector<int> pos = bfs(i);
			vector<char> second , first;
			for (auto it : pos) {
				first.push_back(s[it]);
				second.push_back(t[it]);
			}
			sort(first.begin(), first.end());
			sort(second.begin(), second.end());



			// for (int i = 0; i < first.size(); i++)
			// 	cout << first[i] << ' ';
			// cout << endl;
			// for (int i = 0; i < second.size(); i++)
			// 	cout << second[i] << ' ';
			// cout << endl;

			for (int i = 0; i < first.size(); i++) {
				if (first[i] != second[i]) {
					cout << "NO\n";
					return;
				}
			}
		}
	}

	cout << "YES\n";
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