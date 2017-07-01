#include <iostream>
using namespace std;

int Sarr[1000][1000] = {0};

int main()
{
	int Aarr[1000] = { 0 };
	int num = 0;
	int sum = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cin >> Sarr[i][j];
		}
	}
	
	if (num == 2)
	{
		Aarr[0] = 1;
		Aarr[1] = 1;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			sum = Sarr[i][(i + 1) % num] + Sarr[(i + 1) % num][(i + 2) % num];
			sum -= Sarr[i][(i + 2) % num];
			Aarr[(i + 1) % num] = sum / 2;

		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << Aarr[i] << " ";
	}
	
	cout << endl;

	return 0;
}