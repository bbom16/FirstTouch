#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int people = 0;
	int input, output;
	for (int i = 0; i < 4; i++)
	{
		cin >> output >> input;
		people -= output;
		people += input;

		if (max < people)
			max = people;
	}
	cout << max << endl;
}