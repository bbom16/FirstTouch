#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int a, b, c;
	int result = 0;
	int resultArr[10] = { 0 };
	int num = 0;

	cin >> a >> b >> c;

	result = a*b*c; 

	string s_result = to_string(result);

	for (int i = 0; i < s_result.length(); i++)
	{
		switch (s_result[i])
		{
		case '0':
			resultArr[0]++;
			break;
		case '1':
			resultArr[1]++;
			break;
		case '2':
			resultArr[2]++;
			break;
		case '3':
			resultArr[3]++;
			break;
		case '4':
			resultArr[4]++;
			break;
		case '5':
			resultArr[5]++;
			break;
		case '6':
			resultArr[6]++;
			break;
		case '7':
			resultArr[7]++;
			break;
		case '8':
			resultArr[8]++;
			break;
		case '9':
			resultArr[9]++;
			break;
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout << resultArr[i] << endl;
	}
	return 0;
}