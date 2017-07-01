#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	int cnt = 1;
	int num2 = (num%10)*10 + ((num/10 + num%10)%10);

	while (num != num2)
	{
		cnt++;
		num2 = (num2%10)*10 + ((num2 / 10 + num2 % 10)%10);
	}

	cout << cnt << endl;
	return 0;
}