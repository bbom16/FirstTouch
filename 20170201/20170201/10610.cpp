#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string numarr;
	bool isright = false;

	cin >> numarr;

	for (int i = 0; i < numarr.length(); i++)
	{
		if (numarr[i] == '0')
			isright == true;
	}
	return 0;
}