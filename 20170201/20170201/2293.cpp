#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int coin[100] = { 0 };
	int value[10001] = { 1 };
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> coin[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k + 1; j++)
		{
			if (j >= coin[i])
				value[j] += value[j - coin[i]];
		}
	}
	cout << value[k] << endl;
	return 0;
}