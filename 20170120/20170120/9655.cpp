#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N % 2 == 0)
		cout << "CY" << endl;
	else if (N % 2 == 1)
		cout << "SK" << endl;
	return 0;
}