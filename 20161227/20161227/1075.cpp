#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int fNum = 0; //������ ��
	int q = 0; //100���� ���� ��

	cin >> num;
	cin >> fNum;
	
	q = num / 100;

	for (int i = 0; i < 100; i++)
	{
		num = q * 100 + i;
		
		if (num%fNum == 0)
		{
			if (i < 10)
			{
				cout << '0' << i << endl;
			}
			else
			{
				cout << i << endl;
			}
			break;
		}
		
	}

	return 0;
}