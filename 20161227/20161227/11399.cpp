#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int timearr[1000] = {0};
	int pNum = 0;
	
	cin >> pNum;

	for (int i = 0; i < pNum; i++)
	{
		cin >> timearr[i];
	}

	sort(timearr, timearr + pNum);

	int sumarr[1000] = { 0 };
	int sum_t = 0;
	int sum = 0;
	for (int i = 0; i < pNum; i++)
	{
		sum_t += timearr[i];
		sum += sum_t;
	}
	cout << sum << endl;

	return 0;
}