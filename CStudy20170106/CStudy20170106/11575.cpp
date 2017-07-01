#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int T = 0;
	cin >> T;

	int a = 0;
	int b = 0;
	string s = " ";
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			s[j] -= 65;
			s[j] = (a*s[j] + b) % 26;
			s[j] += 65;
		}
		cout << s << endl;
	}


	return 0;
}