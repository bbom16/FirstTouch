#include <iostream>
using namespace std;

int main()
{
	int coinNum = 0;
	int coin[10] = { 0 };
	int money = 0;
	int min = 0;

	cin >> coinNum >> money;
	
	for (int i = 0; i < coinNum; i++)
	{
		cin >> coin[i];
	}


	for (int j = coinNum - 1; j >= 0; j--)
	{
		if (money >= coin[j])
		{
			min += money / coin[j];
			money %= coin[j];
		}
		if (money == 0)
			break;
	}
	

	cout << min << endl;
	
	return 0;
}