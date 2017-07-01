#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int gNum = 0;
	int bNum = 0;
	int bType[50][2] = { 0 };
	int minMoney[50] = { 0 };

	cin >> gNum >> bNum;

	for (int i = 0; i < bNum; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> bType[i][j];
		}
	}

	for (int i = 0; i < bNum; i++)
	{

		if ((gNum % 6)*bType[i][1] > bType[i][0])
		{
			minMoney[i] = ((gNum / 6) + 1)*bType[i][0];
		}
		else
		{
			minMoney[i] = (gNum / 6)*bType[i][0] +
				(gNum % 6)*bType[i][1];
		}

	}

	sort(minMoney, minMoney + bNum);

	cout << minMoney[0] << endl;

	return 0;
}