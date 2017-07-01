#include <iostream>
#include <cmath>
using namespace std;

long long numarr[1000001];

int main()
{
	long long min, max;
	cin >> min >> max;

	double d = max - min + 1;
	
	int cnt = 0;

	for (int i = 0; i < d; i++)
	{
		numarr[i] = min+i;
	}

	for (int i = 2; i*i<=max; i++)
	{
		long long x = min / (i*i);

		if (min % (i*i) != 0)
			x++;

		while (x*(i*i) <= max)
		{
			numarr[x*(i*i) - min] = 0;
			x++;
		}
		
	}
	
	for (int i = 0; i < d; i++)
	{
		if (numarr[i] != 0)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}