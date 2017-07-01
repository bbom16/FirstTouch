#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int sum = 0;
	
	cin >> num;

	for (int i = 1; i < num+1; i++)
	{
		sum += i;

		if (sum >= num)
		{
			int s = sum - num;
			if (i % 2 == 0 || i < 3)
			{
				cout << i - s
					<< "/" << 1 + s << endl;
			}
			else if (i > 2 && i % 2 == 1)
			{
				cout << 1 + s
					<< "/" << i - s << endl;
			}
			break;
		}
	}
	return 0;
}