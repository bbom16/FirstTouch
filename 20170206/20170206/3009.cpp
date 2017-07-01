#include <iostream>
using namespace std;

int main()
{
	int x[2];
	int y[2];
	int z[2];
	int w[2];


	for (int i = 0; i < 2; i++)
		cin >> x[i];
	for (int i = 0; i < 2; i++)
		cin >> y[i];
	for (int i = 0; i < 2; i++)
		cin >> z[i];

	for (int i = 0; i < 2; i++)
	{
		if (x[i] == y[i])
			w[i] = z[i];
		if (y[i] == z[i])
			w[i] = x[i];
		if (x[i] == z[i])
			w[i] = y[i];
	}

	for (int i = 0; i < 2; i++)
	{
		cout << w[i] << " ";
	}
	cout << endl;
	return 0;
}