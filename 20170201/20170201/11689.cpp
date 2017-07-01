#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n+1];
	int cnt = 0;
	clock_t start, end;
	start = clock();

	for (int i = 1; i < n + 1; i++)
		arr[i] = i;

	for (int i = 2; i < n + 1; i++)
	{	
		if (arr[i] == 0)
			continue;
		for (int j = 2; j < n + 1; j++)
		{
			if ((n%j == 0) && (i%j == 0))
			{
				for (int k = i; k < n + 1; k += i)
					arr[k] = 0;
				break;
			}
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		if (arr[i] != 0)
			cnt++;
	}
	cout << cnt << endl;

	end = clock();

	double time = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "수행시간 : " << time;

	//int cnt = 1; // 1은 항상 포함
	//int chk = 0;

	/*for (int i = 2; i < n + 1; i++)
	{
		for (int j = 2; j < n + 1; j++)
		{
			if ((n%j == 0) && (i%j == 0))
			{
				chk = 1;
				break;
			}
		}
		if (chk != 1)
			cnt++;
		else
			chk = 0;
	}

	cout << cnt << endl;*/


	return 0;
}