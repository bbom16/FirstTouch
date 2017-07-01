#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int V = 0;
	int h = 0;
	int day = 0;

	cin >> A >> B >> V;

	while (1)
	{
		day++;
		h += A;
		if (h >= V)
		{
			cout << day << endl;
			break;
		}
		h -= B;
	}
	return 0;
}