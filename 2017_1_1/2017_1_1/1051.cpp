#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	string* rec = new string[N];

	for (int i = 0; i < N; i++)
	{
		cin >> rec[i];
	}

	int n = min(N, M); //둘 중 더 작은 값

	while (n > 0)
	{
		for (int i = 0; i < N - n+1; i++)
		{
			for (int j = 0; j < M - n+1; j++)
			{
				if (rec[i][j] == rec[i + (n - 1)][j] &&
					rec[i][j] == rec[i][j + (n - 1)] &&
					rec[i][j] == rec[i + (n - 1)][j + (n - 1)])
				{
					cout << n*n << endl;
					return 0;
				}
				else
					continue;
			}
		}
		n--;
	}

	return 0;
}