#include <iostream>
using namespace std;

int main()
{

	int t;	
	cin >> t;

	int n;
	while (t--)
	{
		long long fibo[68] = { 1,1,2,4, };
		cin >> n;

		if (n >= 4)
		{
			for (int i = 4; i < n + 1; i++)
			{
				fibo[i] = fibo[i - 1] + fibo[i - 2] + fibo[i - 3] + fibo[i - 4];
			}
		}
		cout << fibo[n] << endl;
	}

	return 0;
}