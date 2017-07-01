#include <iostream>
using namespace std;

int main()
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;

	cin >> a >> b >> c >> d;

	int t = 1;
	while (1)
	{
		if (b%t == b)
		{
			a = a*t + b;
			break;
		}
		t *= 10;
	}
	t = 1;
	while (1)
	{
		if (d%t == d)
		{
			c = c*t + d;
			break;
		}
		t *= 10;
	}

	cout << a + c << endl;
	return 0;
}