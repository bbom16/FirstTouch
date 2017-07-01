#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = 0;

	int* warr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> warr[i];

	for (int i = 0; i < n; i++)
	{
		if (warr[i - 2] + warr[i - 1] > warr[
	}

	cout << max << endl;
	return 0;
}