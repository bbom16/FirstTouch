#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	int N;
	int parr[10001] = { 0 };

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int j = 1; j < N+1; j++)
		{
			cin >> parr[j];
		}
		
		int* p = &parr[1];
		int k = parr[1];
		for (int j = 1; j < N+1; j++)
		{
			p = &parr[k];
			if (*p == N)
			{
				cout << j << endl;
				k = 0;
				break;
			}
			
			k = *p;
		}
		if (k != 0)
		{
			cout << 0 << endl;
		}
	}

	return 0;
}