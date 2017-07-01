#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int cnt = 0;
	int d;

	for (int i = 0; i < N + 1; i++)
	{
		if(i>=1 && i<100)
		{ 
			cnt++;
		}
		else if(i >=100 && i<1000)
		{
			d = (i / 100) - ((i%100) / 10);
			if (d == ((i % 100) / 10) - (i % 10))
				cnt++;
		}
		if (i == 1000)
			continue;
	}

	cout << cnt << endl;
	return 0;
}