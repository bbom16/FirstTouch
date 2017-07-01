#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int i = 1;
	while (1)
	{
		if (i > N)
		{
			cout << '0' << endl;
			break;
		}
		int k = 0;
		int sum = 0;
		for (int j = 6; j > -1; j--)
		{
			k = (i / pow(10, j));
			k -= (i/(int)pow(10, j+1))*10;
			sum += k;
		}
		sum += i;
		if (sum == N)
		{
			cout << i << endl;
			break;
		}
		else
			i++;
	}

	return 0;
}