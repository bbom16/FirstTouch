#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char word[1000];
	cin >> word;
	int size = strlen(word);
	for (int i = 0; i < size; i++)
	{
		word[i] = int(word[i]) - 3;
		if (int(word[i]) < 65)
		{
			word[i] = int(word[i] + 26);
		}
		cout << word[i];
	}
	cout << endl;
	return 0;
}