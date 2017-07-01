#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string laser = " ";
	int count = 0;
	int allCount = 0;
	cin >> laser;

	for (int i = 0; i < laser.length(); i++)
	{
		if (laser[i] == '(' && laser[i + 1] == '(')
		{
			count++;
			allCount++;
		}
		else if (laser[i] == '(' && laser[i + 1] == ')')
		{
			allCount += count;
		}
		else if (laser[i] == ')' && laser[i + 1] == ')')
		{
			count--;
		}
	}

	cout << allCount << endl;
	return 0;
}