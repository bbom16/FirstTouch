#include <iostream>
using namespace std;

int cnt = 0;

int findLoad(int i, int j, int(*farr)[500],int m,int n)
{
	if (i == n-1 && j == m-1)
	{
		cnt++;
		return 1;
	}
	if (i > n-1 || j > m-1)
		return 1;

	if (farr[i][j] > farr[i + 1][j])
	{
		return findLoad(i + 1, j, farr,m,n);
	}
	if (farr[i][j] > farr[i][j + 1])
	{
		return findLoad(i, j + 1, farr,m,n);
	}
	
	return cnt;
}
int main()
{
	int M;
	int N;
	int harr[500][500] = { 0 };

	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> harr[i][j];
		}
	}

	int c = findLoad(0, 0, harr, M, N);

	cout << cnt << endl;

	return 0;
}