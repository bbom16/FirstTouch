#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int** harr = new int* [N];

	for (int i = 0; i < N; i++)
	{
		harr[i] = new int[3];
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> harr[i][j];
	}

	int m;
	int sum = 0;
	for (int i = 1; i < N-1; i++)
	{

		int minv = min(harr[i][0], harr[i][1], harr[i][2]);
		for (int j = 0; j < 3; j++)
		{
			if (minv == harr[i][j])
			{
				m = j;
				break;
			}
		}
		if (min(harr[i + 1][0], harr[i + 1][1], harr[i + 1][2]) == harr[i + 1][m])
		{
			if(min(harr[i + 1][0], harr[i + 1][1], harr[i + 1][2] < harr[i+1][m])
		}
	}
	return 0;
}