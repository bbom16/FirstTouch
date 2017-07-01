#include <iostream>
using namespace std;

int main()
{
	int hCount = 0;
	int harr[1000] = { 0 };

	cin >> hCount;

	for (int i = 0; i < hCount; i++)
	{
		cin >> harr[i];
	}

	int start = 0;
	int dst = 0;
	int size = 0;
	int max = 0;


	if (harr[0] < harr[1])
	{
		start = harr[0];
	}
	for (int i = 1; i < hCount; i++)
	{
		if (harr[i-1] >= harr[i] && harr[i] < harr[i + 1])
			start = harr[i];
		if (harr[i-1]<harr[i] && harr[i] > harr[i + 1])
		{
			dst = harr[i];
			size = dst - start;
			if (max < size)
			{
				max = size;
			}
		}
	}

	cout << max << endl;
	return 0;
}