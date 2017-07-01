#include <iostream>
using namespace std;

int main()
{
	int N,min;
	cin >> N;
	
	while (1)
	{
		if (N > 0)
		{
			if (N >= 5)
			{
				N -= 5;
				min++;
			}
			else if (N >= 3)
			{
				N -= 3;
				min++;
			}
		}
		else if (N == 0)
			break;
		else if (N < 0)
		{
			min = -1;
			break;
		}
	}
	cout << min << endl;

	return 0;
}