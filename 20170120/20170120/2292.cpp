#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N == 1)
	{
		cout << N << endl;
		return 0;
	}

	int end = 1;
	for (int i = 1; i < N + 1; i++)
	{
		end += i*6;
		if (N <= end)
		{
			cout << i+1 << endl;
			break;
		}
	}

	return 0;
}