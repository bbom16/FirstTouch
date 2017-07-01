#include <iostream>
#include <algorithm>
using namespace std;


int tarr[500][500];
int D[500][500] = { 0 };
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
				cin >> tarr[i][j];
			else
				break;
		}
	}

	D[0][0] = tarr[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
			{
				if (j == 0)
					D[i][j] = D[i - 1][j] + tarr[i][j];
				else if (j == i)
					D[i][j] = D[i - 1][j - 1] + tarr[i][j];
				else
					D[i][j] = max(D[i-1][j],D[i-1][j-1]) + tarr[i][j];
			}
			else
				break;
		}
	}
	
	int max[500];
	for (int i = 0; i < n; i++)
	{
		max[i] = D[n - 1][i];
	}
	sort(max, max + n);

	cout << max[n-1] << endl;
	return 0;
}