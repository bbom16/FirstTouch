#include <iostream>
using namespace std;

int main()
{
	int N;
	char space[100][100];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> space[i][j];
	}
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int n = 0;
		for (int j = 0; j < N; j++)
		{
			if (space[i][j] == '.')
				n++;
			else if (space[i][j] == 'X')
			{
				if(n>1)
					cnt++;
				n = 0;
			}
		}
		if (n > 1)
			cnt++;
	}
	cout << cnt << " ";

	cnt = 0;
	for (int j = 0; j < N; j++)
	{
		int n = 0;
		for (int i = 0; i < N; i++)
		{
			if (space[i][j] == '.')
				n++;
			else if (space[i][j] == 'X')
			{
				if(n>1)
					cnt++;
				n = 0;
			}
		}
		if (n > 1)
			cnt++;
		
	}
	cout << cnt << endl;
	return 0;
}