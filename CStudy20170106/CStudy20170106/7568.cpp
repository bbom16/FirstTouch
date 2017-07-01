#include <iostream>
using namespace std;

void main()
{
	int pNum = 0;
	cin >> pNum;

	int body[50][3] = { 0 };
	for (int i = 0; i < pNum; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> body[i][j];
		}
	}
	for (int i = 0; i < pNum; i++)
	{
		for (int j = 0; j < pNum; j++)
		{
			if (body[i][0] < body[j][0] && body[i][1] < body[j][1])
				body[i][2]++;
		}
	}

	for (int i = 0; i < pNum; i++)
	{
		cout << body[i][2]+1 << " ";
	}
}