#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int hArr[9] = { 0 };


	for (int i = 0; i < 9; i++)
	{
		cin >> hArr[i];
	}
	
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		sum += hArr[i];
	}

	sum -= 100;

	int twosum = 0;
	for(int i = 0; i < 9; i++)
	{
		for (int j = 1; j < 9 - i; j++)
		{
			twosum = hArr[i] + hArr[i + j];
			if (sum == twosum)
			{
				hArr[i] = 0;
				hArr[i + j] = 0;
				break;
			}
		}
	}
	sort(hArr, hArr + 9);
	for (int i = 2; i < 9; i++)
	{
		cout << hArr[i] << endl;
	}
	return 0;
}