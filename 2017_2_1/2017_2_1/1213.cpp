//¸øÇ°

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

int Aarr[26] = { 0 };
int main()
{
	string name;
	cin >> name;

	fill_n(Aarr, 26, -1);
	int n = name.size();
	for (int i = 0; i < n; i++)
		Aarr[(int)name[i]-65]++;

	vector<char> Parr;
	Parr.resize(n);
	vector<int> even;
	int kind = 0 , odd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (Aarr[i] % 2)
		{
			for (int j = 0; j < Aarr[i]+1; j++)
				even.push_back(i);
		}
		else
		{
			for (int j = 0; j < Aarr[i]; j++)
				even.push_back(i);
			kind++;
			odd = i;
		}

	}
	if (n % 2 == 0)
	{
		if (kind >= 1)
			cout << "I'm Sorry Hansoo";
		else
		{
			int j = 0;
			for (int i = 0; i < n / 2; i++)
			{
				Parr[i] = (char)even[j] + 65;
				Parr[n - i - 1] = (char)even[j] + 65;
				j += 2;
			}
		}
	}
	else
	{
		if (kind > 1)
		{
			cout << "I'm Sorry Hansoo";
		}

		else
		{
			Parr[n / 2] = odd+65;
			int j = 0;
			for (int i = 0; i < n / 2; i++)
			{
				Parr[i] = (char)even[j] + 65;
				Parr[n - i - 1] = (char)even[j + 1] + 65;
				j += 2;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << Parr[i];
	cout << endl;
	return 0;
}