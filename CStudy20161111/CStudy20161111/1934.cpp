#include <iostream>
using namespace std;

int main()
{
	int cnt = 0;
	int num1 = 0;
	int num2 = 0;
	int r = 1;
	int a = 0;
	int b = 0;

	cin >> cnt;
	
	for (int i = 0; i < cnt; i++)
	{
		cin >> num1 >> num2;

		if (num2 > num1)
		{
			a = num2;
			b = num1;
		}
		else
		{
			a = num1;
			b = num2;
		}

		while (r != 0)
		{
			r = a%b;
			if (r != 0)
			{
				a = b;
				b = r;
			}
			else
				break;
		}
		cout << (num1*num2)/b << endl;
		r = 1;
	}
		return 0;
	
}