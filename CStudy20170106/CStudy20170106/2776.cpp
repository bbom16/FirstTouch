#include <iostream>
using namespace std;

int narr1[1000000] = { 0 };
int narr2[1000000] = { 0 };
int main()
{
	int T;
	int note1 = 0;
	int note2 = 0;

	cin >> T;

	for (int k = 0; k < T; k++)
	{
		cin >> note1;
		for (int i = 0; i < note1; i++)
		{
			cin >> narr1[i];
		}

		cin >> note2;
		for (int i = 0; i < note2; i++)
		{
			cin >> narr2[i];
		}

		for (int i = 0; i < note2; i++)
		{
			for (int j = 0; j < note1; j++)
			{
				if (narr2[i] == narr1[j])
				{
					cout << "1" << endl;
					narr2[i] = -1;
					break;
				}
			}
			if (narr2[i] > 0)
				cout << "0" << endl;
		}

	}
	return 0;
}