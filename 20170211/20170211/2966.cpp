#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string adrian = "ABC";
	string bruno = "BABC";
	string goran = "CCAABB";

	while (adrian.length() <= 100)
		adrian += "ABC";
	while (bruno.length() <= 100)
		bruno += "BABC";
	while (goran.length() <= 100)
		goran += "CCAABB";

	int N;
	string correct;

	cin >> N;
	cin >> correct;
	
	int chk[3] = { 0 };
	for (int i = 0; i < correct.length(); i++)
	{
		if (adrian[i] == correct[i])
			chk[0]++;
		if (bruno[i] == correct[i])
			chk[1]++;
		if (goran[i] == correct[i])
			chk[2]++;
	}
	int max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (max < chk[i])
		{
			max = chk[i];
		}
	}
	cout << max << endl;

	for (int i = 0; i < 3; i++)
	{
		if(max == chk[i] && i == 0)
			cout << "Adrian" << endl;
		if (max == chk[i] && i == 1)
			cout << "Bruno" << endl;
		if (max == chk[i] && i == 2)
			cout << "Goran" << endl;			
	}


	return 0;
}