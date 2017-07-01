#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <locale>
using namespace std;

int main()
{
	int max = 0;
	string s;
	string max_s;
	while (1)
	{
		cin >> s;
		if (s == "E-N-D")
			break;
		
		for (int i = 0; i < s.length(); i++)
		{
			if (isalpha(s[i]) != 0 || s[i] == '-')
				continue;
			else
			{
				s.erase(i,1);
			}
		}

		if (s.length() > max)
		{
			max = s.length();
			max_s = s;
		}
	}
	transform(max_s.begin(), max_s.end(), max_s.begin(), ::tolower);
	cout << max_s << endl;
	return 0;
}