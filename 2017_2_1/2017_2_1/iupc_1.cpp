#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--)
	{
	
		int M;
		char C;
		cin >> M >> C;



		char a;
		int b;
		for (int i = 0; i < M; i++)
		{
			if (C == 'C')
			{
				cin >> a;
				cout << int(a - 64) << " ";
			}
			else
			{
				cin >> b;
				cout << char(b + 64) << " ";
			}
		}
		cout << endl;

	}


	return 0;
}