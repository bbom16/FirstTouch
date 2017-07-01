#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int> > matrix;
vector<int> visit;
queue <int> bque;
int start;
void bfs(int s)
{
	for (int i = 0; i < matrix[s].size(); i++)
	{
		if (matrix[s][i] == 1 && visit[i] == 0)
		{
			bque.push(i);
			visit[i] = 1;
		}
		if (!bque.empty())
		{
			int next = bque.front();
			bque.pop();
			matrix[start][next] = 1;
			bfs(next);
		}
	} 
}


int main()
{

	int N;
	cin >> N;

	matrix.resize(N);
	int a;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> a;
			matrix[i].push_back(a);
		}
	}

	for (int i = 0; i < N; i++)
	{
		start = i;
		visit.resize(N);
		bfs(i);
		visit.clear();
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}


	return 0;
}