#include <iostream>
using namespace std;

int main()
{
	int T = 0;
	int num = 0;
	int numarr[12] = { 0,1,2,4 };
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> num;
		for(int j = 4; j < num+1; j++)
		{
			numarr[j] = numarr[j - 1] + numarr[j - 2] + numarr[j - 3];	
		}
		cout << numarr[num] << endl;
	}

	return 0;
}