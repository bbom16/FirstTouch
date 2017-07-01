#include<iostream>
#include<algorithm>
using namespace std;

int room[1000][1000];
int Dp[1000][1000];

int main()
{
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> room[i][j];
	}
	Dp[0][0] = room[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (i == 0)
				Dp[i][j] = room[i][j] + Dp[i][j-1];
			else if (j == 0)
				Dp[i][j] = room[i][j] + Dp[i-1][j];
			else
				Dp[i][j] = room[i][j] + max(max(Dp[i - 1][j - 1], Dp[i - 1][j]) ,Dp[i][j - 1]);

		}
	}
		int max = 0;
		for (int i = 0; i < M; i++)
		{
			if (max < Dp[N - 1][i])
				max = Dp[N - 1][i];
			else
				continue;
		}
	
		cout << max << endl;

	return 0;
}