#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int* dp = new int[x+1];
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;

	for(int i = 4; i<x+1; i++)
	{
		if (i % 3 == 0 && i % 2 == 0)
		{
			dp[i] = min(dp[i / 3], dp[i / 2]) +1;
		}
		else if (i % 3 == 0)
		{
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		}
		else if (i % 2 == 0)
		{
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
		}
		else
		{
			dp[i] = dp[i - 1] + 1;
		}
	}

	cout << dp[x] << endl;

	return 0;
}