#include <iostream>
using namespace std;

int main()
{
	int E = 0; //����
	int S = 0; //�¾�
	int M = 0; //��
	cin >> E >> S >> M;
	
	int e = 1;
	int s = 1;
	int m = 1;
	int year = 1;
	while (1)
	{
		if (e == E && s == S && m == M)
		{
			break;
		}
		year++;
		e++;
		s++;
		m++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;
	}

	cout << year << endl;
	return 0;
}