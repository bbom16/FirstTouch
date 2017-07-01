#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int a, b, c;
	
	int max = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b >> c;
		
		int cnt = 1;
		int result = 0;
		int big = 0;

		if (a == b || b == c || c == a)
		{
			if (a == b)
			{
				big = a;
				cnt++;
			}
			if (b == c)
			{
				big = b;
				cnt++;
			}
			if (c == a)
			{
				big = c;
				cnt++;
			}
		}
		else
		{
			if (a > b)
				big = a;
			if (b > c)
				big = c;
			if (c > a)
				big = c;
		}
		if (cnt >= 3)
			result = 10000 + big * 1000;
		else if (cnt == 2)
			result = 1000 + big * 100;
		else if (cnt == 1)
			result = big * 100;
		
		if (max <= result)
			max = result;
	}
	cout << max << endl;
	return 0;
}