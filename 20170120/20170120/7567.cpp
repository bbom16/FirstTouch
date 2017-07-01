#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string dish;
	int high = 0;

	cin >> dish;

	high += 10;
	for (int i = 1; i < dish.length(); i++)
	{
		if (dish[i - 1] == dish[i])
			high += 5;
		else
			high += 10;
	}

	cout << high << endl;
	return 0;
}