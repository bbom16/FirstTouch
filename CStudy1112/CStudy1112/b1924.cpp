#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month;
	int day;

	cin >> month >> day;

	while (month != 1)
	{
		if (month == 2
			|| month == 4 || month == 6 ||
			month == 8 || month == 9 || month == 11)
		{
			day += 31;
		}
		else if (month == 5 || month == 7 || month == 10
			|| month == 12)
		{
			day += 30;
		}
		else if (month == 3)
		{
			day += 28;
		}
		
		month -= 1;
	}
	switch (day % 7)
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}
	return 0;
}