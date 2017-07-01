#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	
	cin >> num;

	if (num == 1)
	{
		return 0;
	}
	int i = 2;
	while (1)
	{
		if (num == i)
		{
			cout << i << endl;
			break;
		}
		if (num%i != 0)
		{
			i++;
		}
		else if (num%i == 0)
		{
			cout << i << endl;
			num /= i;
		}
	}
	return 0;
}