#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int n = 1;
	while (n != 0)
	{
		cin >> n;

		if (n == 0)
			break;
		vector<int> prime(2*n+1);

		for (int i = n+1; i < 2*n+1; i++)
			prime[i] = i;

		for (int i = 2; i <=2*n; i++)
		{
			if (prime[i] == -1)
				continue;

			for (int j = i+i; j < 2*n+1; j+=i)
			{
				prime[j] = -1;
			}
		}
		
		int cnt = 0;
		for (int i = 0; i < prime.size(); i++)
		{
			if (prime[i] > 0)
				cnt++;
		}
		cout << cnt << endl;
	}


	return 0;
}