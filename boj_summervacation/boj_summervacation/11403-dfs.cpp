#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > matrix;
vector<int> visit;
int start;
void dfs(int s)
{
	for (int i = 0; i < matrix[s].size(); i++)
	{
		if (matrix[s][i] == 1 && visit[i] == 0)
		{
			matrix[start][i] = 1;
			visit[i] = 1;
			dfs(i);
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
		dfs(i);
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