#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int> > graph;
vector<bool> visit;
queue<int> b_que;

void dfs(int v)
{
	visit[v] = true;
	cout << v << " ";

	for (int i = 0; i < graph[v].size(); i++)
	{
		if (visit[graph[v][i]] == false)
			dfs(graph[v][i]);
	}
}

void bfs(int v)
{
	for (int i = 0; i < graph[v].size(); i++)
	{
		if (visit[graph[v][i]] == false)
		{
			b_que.push(graph[v][i]);
			visit[graph[v][i]] = true;
		}
	}
	cout << v << " ";
	b_que.pop();
	if (b_que.empty())
		return;
	bfs(b_que.front());

}
int main()
{
	int N, M, V;//정점, 간선, 탐색 시작번호
	cin >> N >> M >> V;


	graph.resize(N+1);

	int v1, v2;
	for (int i = 0; i < M; i++)
	{
		cin >> v1 >> v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	for (int i = 1; i < N + 1; i++)
		sort(graph[i].begin(), graph[i].end());
	visit.resize(N + 1);
	dfs(V);
	cout << endl;
	visit.clear();
	visit.resize(N + 1);
	b_que.push(V);
	visit[V] = true;
	bfs(V);
	cout << endl;
	return 0;
}