#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int T;
	cin >> T;

	string t1, t2;
	for (int i = 0; i < T; i++)
	{
		int d = 0;
		cin >> t1 >> t2;

		for (int j = 0; j < t1.length(); j++)
		{
			if (t1[j] != t2[j])
				d++;
		}

		cout << "Hamming distance is " << d << "."<< endl;
	}


	return 0;
}