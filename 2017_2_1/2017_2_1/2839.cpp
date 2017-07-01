#include <iostream>
using namespace std;

int main()

{
	int N;
	cin >> N;

	bool chk = false;
	int min_num = 0;
	if (N % 5 == 0)
	{
		min_num = N / 5;
		chk = true;
	}
	
	else
	{
		int Q = N / 5;
		int rest = N % 5;
		while (Q >= 0)
		{
			if(rest % 3 == 0)
			{
				min_num += Q;
				min_num += rest / 3;
				chk = true;
				break;
			}
			rest += 5;
			Q--;
		}

	}
	if (chk == false && N % 3 == 0)
	{
		min_num = N / 3;
		chk = true;
	}

	if (chk == false)
		cout << -1 << endl;
	else
		cout << min_num << endl;

	return 0;
}