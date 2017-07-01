#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string name;
	cin >> name;

	int ave = 0;

	if (name.length() % 2 == 0)
		ave = name.length() / 2;
	else
		ave = (name.length() + 1) / 2;

	int l[26] = {0};
	for (int i = 0; i < name.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (name[i] - 65 == j)
				l[j]++;
		}
	}

	int a = 0;

	for (int i = 0; i < 26; i++)
	{
		if (l[i] % 2 != 0)
			a++;
		else
			continue;
		if(a > 1)
		{	
			cout << "I'm Sorry Hansoo" << endl;
			return 0;
		}
	}
	int j = 0;
	for (int i = 0; i < 26; i++)
	{
		if (l[i] == 1)
			name[ave - 1] = i + 65;

		else if (l[i] >= 2)
		{
			while (l[i] != 0 && j <= ave)
			{
				name[j] = i + 65;
				if (name.length() % 2 == 0)
					name[2 * ave - j - 1] = i + 65;
				else
					name[2 * ave - j - 2] = i + 65;
				j++;
				l[i] -= 2;
			}
		}
		else
			continue;
	}
	cout << name << endl;
	return 0;
}