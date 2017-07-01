#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int N = 0;
	for (int i = 0; i < num; i++)
	{	
		cin >> N;
		int j = 2;
		int arr[100000][2] = { 0 };
		while (1)
		{
			if (N == j)
			{
				arr[j][0] = j;
				arr[j][1]++;
				break;
			}
			if (N%j != 0)
			{
				j++;
			}
			else if (N%j == 0)
			{
				arr[j][0] = j;
				arr[j][1]++;
				N /= j;
			}
		}
		for (int j = 0; j < N + 1; j++)
		{
			if (arr[j][0] != 0)
			{
				cout << arr[j][0] << " " << arr[j][1] << endl;
			}
		}
		
	}
	return 0;
}